#pragma once

#include "src/application/auth/dto/login.h"
#include "src/application/auth/interfaces/login.h"
#include "src/application/auth/results/login.h"

class LoginUserService : public ILoginUserService {
public:
    LoginUserService() = default;
    ~LoginUserService() noexcept override = default;

    CreateJwtsByEmailResult createJwtsByEmail(
        const CreateJwtsByEmailDto& dto
    ) override;

    RefreshAccessTokenResult refreshAccessToken(
        const RefreshAccessTokenDto& dto
    ) override;
};
