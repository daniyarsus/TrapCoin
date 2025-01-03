#pragma once

#include "string"

struct CreateJwtsByEmailResult {
  bool success;
  std::string response;
};

struct RefreshAccessTokenResult {
  bool success;
  std::string response;
};
