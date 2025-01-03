#pragma once

#include <string>

struct SendRegisterCodeResult {
  bool success;
  std::string response;
};

struct AcceptRegisterCodeResult {
  bool success;
  std::string response;
};
