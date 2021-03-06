// Copyright (C) 2013-2018 iFunFactory Inc. All Rights Reserved.
//
// This work is confidential and proprietary to iFunFactory Inc. and
// must not be used, disclosed, copied, or distributed without the prior
// consent of iFunFactory Inc.

#include "funapi_utils.h"

#ifdef FUNAPI_UE4
#include "FunapiPrivatePCH.h"
#endif

#include <iomanip>

#ifdef FUNAPI_COCOS2D
#include <assert.h>
#include "md5/md5.h"
#endif

#ifdef FUNAPI_UE4
#include "Misc/AssertionMacros.h"
#include "Misc/SecureHash.h"
#include "Misc/Base64.h"
#endif

namespace fun {

////////////////////////////////////////////////////////////////////////////////
// FunapiUtil implementation.

#ifdef FUNAPI_COCOS2D
fun::string FunapiUtil::MD5String(const fun::string &file_name, bool use_front) {
  const size_t read_buffer_size = 1048576; // 1024*1024
  const size_t md5_buffer_size = 16;
  fun::vector<unsigned char> buffer(read_buffer_size);
  fun::vector<unsigned char> md5(md5_buffer_size);
  size_t length;

  FILE *fp = fopen(file_name.c_str(), "rb");
  if (!fp) {
    return fun::string("");
  }

  md5_state_t ctx;
  md5_init(&ctx);
  if (use_front) {
    length = fread(buffer.data(), 1, read_buffer_size, fp);
    md5_append(&ctx, buffer.data(), static_cast<int>(length));
  }
  else {
    while ((length = fread(buffer.data(), 1, read_buffer_size, fp)) != 0) {
      md5_append(&ctx, buffer.data(), static_cast<int>(length));
    }
  }
  md5_finish(&ctx, md5.data());
  fclose(fp);

  fun::string ret(md5_buffer_size*2, 0);
  char* c = const_cast<char*>(ret.data());
  for (int i = 0; i<md5_buffer_size; ++i, c+=2) {
    sprintf(c, "%02x", md5[i]);
  }

  return ret;
}
#endif // FUNAPI_COCOS2D


#ifdef FUNAPI_UE4
fun::string FunapiUtil::MD5String(const fun::string &file_name, bool use_front) {
  const size_t read_buffer_size = 1048576; // 1024*1024
  const size_t md5_buffer_size = 16;
  fun::vector<unsigned char> buffer(read_buffer_size);
  fun::vector<unsigned char> md5_buffer(read_buffer_size);
  size_t length;
  FMD5 md5;

  FILE *fp = fopen(file_name.c_str(), "rb");
  if (!fp) {
    return fun::string("");
  }

  if (use_front) {
    length = fread(buffer.data(), 1, read_buffer_size, fp);
    md5.Update(buffer.data(), length);
  }
  else {
    while ((length = fread(buffer.data(), 1, read_buffer_size, fp)) != 0) {
      md5.Update(buffer.data(), length);
    }
  }

  md5.Final(md5_buffer.data());

  fclose(fp);

  fun::string ret(md5_buffer_size*2, 0);
  char* c = const_cast<char*>(ret.data());
  for (int i = 0; i<md5_buffer_size; ++i, c+=2) {
    sprintf(c, "%02x", md5_buffer[i]);
  }

  return ret;
}
#endif // FUNAPI_UE4

#ifdef FUNAPI_COCOS2D
bool FunapiUtil::DecodeBase64(const fun::string &in, fun::vector<uint8_t> &out) {
  unsigned char *buffer = nullptr;
  auto len = cocos2d::base64Decode((unsigned char*)in.c_str(), (unsigned int)in.length(), &buffer);
  if (buffer) {
    out.resize(len);
    memcpy(out.data(), buffer, len);

    free (buffer);
    buffer = nullptr;

    return true;
  }

  return false;
}
#endif

#ifdef FUNAPI_UE4
bool FunapiUtil::DecodeBase64(const fun::string &in, fun::vector<uint8_t> &out) {
  TArray<uint8> temp_array;

  bool ret = FBase64::Decode(FString(in.c_str()), temp_array);
  if (ret) {
    out.resize(temp_array.Num());
    FMemory::Memcpy(out.data(), temp_array.GetData(), temp_array.Num());
  }

  return ret;
}
#endif // FUNAPI_UE4


int FunapiUtil::GetSocketErrorCode() {
#ifdef FUNAPI_PLATFORM_WINDOWS
  return ::WSAGetLastError();
#else
  return errno;
#endif
}


fun::string FunapiUtil::GetSocketErrorString(const int code) {
#ifdef FUNAPI_PLATFORM_WINDOWS
  LPSTR temp_error_string = NULL;

  int size = ::FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM,
    0, code, MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US), (LPSTR)&temp_error_string, 0, 0);

  fun::string ret = temp_error_string;

  LocalFree(temp_error_string);

  return ret;
#else
  return strerror(code);
#endif
}


fun::string FunapiUtil::StringFromBytes(const fun::string &uuid_str) {
  if (uuid_str.length() >= 24) {
    if (uuid_str[8] == '-' &&
        uuid_str[13] == '-' &&
        uuid_str[18] == '-' &&
        uuid_str[23] == '-') {
      return uuid_str;
    }
  }

  fun::stringstream ss;
  ss << std::hex << std::right;
  ss.fill(ss.widen('0'));

  const size_t length = uuid_str.length();
  uint8_t *data = reinterpret_cast<uint8_t*>(const_cast<char*>(uuid_str.c_str()));

  for (size_t i = 0; i < length; ++i) {
    ss.width(2);
    ss << static_cast<uint16_t>(data[i]);
    if (i == 3 || i == 5 || i == 7 || i == 9) {
      ss << ss.widen('-');
    }
  }

  return ss.str();
}


fun::string FunapiUtil::BytesFromString(const fun::string &uuid) {
  fun::string uuid_str;
  uuid_str.resize(16);
  uint8_t *dest = reinterpret_cast<uint8_t*>(const_cast<char*>(uuid_str.c_str()));

  const char *src = uuid.c_str();
  char temp_buffer[3];
  temp_buffer[2] = 0;
  char *ptr;

  for (int i=0;i<16;++i) {
    memcpy (temp_buffer, src, 2);
    dest[i] = strtoul(temp_buffer, &ptr, 16);

    if (i == 3 || i == 5 || i == 7 || i == 9) {
      src += 3;
    }
    else {
      src += 2;
    }
  }

  return uuid_str;
}


bool FunapiUtil::SeqLess(const uint32_t x, const uint32_t y) {
  //  - http://en.wikipedia.org/wiki/Serial_number_arithmetic
  //  - RFC 1982
  return (int32_t)(y - x) > 0;
}


fun::string FunapiUtil::EncodeUrl(const fun::string& url)
{
  // https://github.com/whoshuu/cpr/blob/master/cpr/util.cpp
  // https://en.cppreference.com/w/cpp/string/byte/isalnum
  stringstream escaped;
  escaped.fill('0');
  escaped << std::hex;

  for (string::const_iterator i = url.begin(), n = url.end(); i != n; ++i) {
    string::value_type c = (*i);

    // Keep alphanumeric and other accepted characters intact
    if (isalnum(static_cast<unsigned char>(c)) || c == '-' || c == '_' || c == '.' || c == '~') {
      escaped << c;
      continue;
    }

    // Any other characters are percent-encoded
    escaped << std::uppercase;
    escaped << '%' << std::setw(2) << int((unsigned char)c);
    escaped << std::nouppercase;
  }

  return escaped.str();
}


bool FunapiUtil::IsFileExists(const fun::string &file_name)
{
#ifdef FUNAPI_COCOS2D
  return cocos2d::FileUtils::getInstance()->isFileExist(file_name.c_str());
#elif FUNAPI_UE4
  return FPlatformFileManager::Get().GetPlatformFile().FileExists(ANSI_TO_TCHAR(file_name.c_str()));
#else
  // If you are supporting a new game engine, please fill out the function
  // using the function provided by the game engine you want to add.
#  error FunapiUtil::IsFileExists function supports only Cocos2d, UE4 game engines.
  return false;
#endif

}


long FunapiUtil::GetFileSize(const fun::string &file_name)
{
#ifdef FUNAPI_COCOS2D
  return cocos2d::FileUtils::getInstance()->getFileSize(file_name.c_str());
#elif FUNAPI_UE4
  return FPlatformFileManager::Get().GetPlatformFile().FileSize(ANSI_TO_TCHAR(file_name.c_str()));
#else
  // If you are supporting a new game engine, please fill out the function
  // using the function provided by the game engine you want to add.
#  error FunapiUtil::GetFileSize function supports only Cocos2d, UE4 game engines.
  return false;
#endif
};



bool FunapiUtil::IsDirectoryExists(const fun::string &dir_name)
{
#ifdef FUNAPI_COCOS2D
  return cocos2d::FileUtils::getInstance()->isDirectoryExist(dir_name);
#elif FUNAPI_UE4
  return FPlatformFileManager::Get().GetPlatformFile().DirectoryExists(ANSI_TO_TCHAR(dir_name.c_str()));
#else
  // If you are supporting a new game engine, please fill out the function
  // using the function provided by the game engine you want to add.
#  error FunapiUtil::IsDirectoryExists function supports only Cocos2d, UE4 game engines.
  return false;
#endif
}



bool FunapiUtil::CreateDirectory(const fun::string &dir_name)
{
#ifdef FUNAPI_COCOS2D
  return cocos2d::FileUtils::getInstance()->createDirectory(dir_name);
#elif FUNAPI_UE4
  return FPlatformFileManager::Get().GetPlatformFile().CreateDirectory(UTF8_TO_TCHAR(dir_name.c_str()));
#else
  // If you are supporting a new game engine, please fill out the function
  // using the function provided by the game engine you want to add.
#  error FunapiUtil::CreateDirectory function supports only Cocos2d, UE4 game engines.
  return false;
#endif
}


void FunapiUtil::Assert(bool condition, fun::string error_msg)
{
#ifdef FUNAPI_UE4
  // UE4 환경에서 assert 는 NDEBUG 로 인해 동작하지 않기 때문에
  // UE4 의 assertion 함수인 checkf 사용.
  checkf(condition, TEXT("%s"), ANSI_TO_TCHAR(error_msg.c_str()));
#else
  assert(condition && error_msg.c_str());
#endif
}


////////////////////////////////////////////////////////////////////////////////
// FunapiTimer implementation.

FunapiTimer::FunapiTimer(time_t seconds) {
  SetTimer(seconds);
}


bool FunapiTimer::IsExpired() const {
  if (time_ == 0)
    return false;

  if (time(NULL) > time_)
    return true;

  return false;
};


void FunapiTimer::SetTimer(const time_t seconds) {
  time_ = time(NULL) + seconds;
};


////////////////////////////////////////////////////////////////////////////////
// DebugUtils implementation.

void DebugUtils::Log(const char* fmt, ...) {
#ifdef DEBUG_LOG
  const int MAX_LENGTH = 2048;

  va_list args;
  char buffer[MAX_LENGTH];

  va_start(args, fmt);
  vsnprintf(buffer, MAX_LENGTH, fmt, args);
  va_end(args);

#ifdef FUNAPI_COCOS2D
  CCLOG("%s", buffer);
#endif

#ifdef FUNAPI_UE4
  UE_LOG(LogFunapi, Log, TEXT("%s"), *FString(buffer));
#endif

#endif // DEBUG_LOG
};


////////////////////////////////////////////////////////////////////////////////
// FunapiInitImpl implementation.

class FunapiInitImpl : public std::enable_shared_from_this<FunapiInitImpl> {
 public:
  typedef FunapiInit::InitHandler InitHandler;
  typedef FunapiInit::DestroyHandler DestroyHandler;

  FunapiInitImpl(const InitHandler &init_handler,
                 const DestroyHandler &destroy_handler);
  virtual ~FunapiInitImpl();

 private:
  DestroyHandler destory_handler_;
};


FunapiInitImpl::FunapiInitImpl(const InitHandler &init_handler,
                               const DestroyHandler &destroy_handler) {
  destory_handler_ = destroy_handler;
  init_handler();
}


FunapiInitImpl::~FunapiInitImpl() {
  // DebugUtils::Log("%s", __FUNCTION__);
  destory_handler_();
}


////////////////////////////////////////////////////////////////////////////////
// FunapiInit implementation.

FunapiInit::FunapiInit(const InitHandler &init_handler,
                       const DestroyHandler &destroy_handler)
  : impl_(std::make_shared<FunapiInitImpl>(init_handler, destroy_handler)) {
}


FunapiInit::~FunapiInit() {
}


std::shared_ptr<FunapiInit> FunapiInit::Create(const InitHandler &init_handler,
                                               const DestroyHandler &destroy_handler) {
  return std::make_shared<FunapiInit>(init_handler, destroy_handler);
}

}  // namespace fun
