#pragma once

#include <string>

struct CreateJwtsByEmailDto {
    std::string email;
    std::string password;
};

struct RefreshAccessTokenDto {
    std::string refreshToken;
};
