#pragma once

#include <string>

struct SendRegisterCodeDto {
  std::string email;
};

struct AcceptRegisterCodeDto {
  std::string email;
  std::string password;
  std::string signKey;
  std::string code;
};
