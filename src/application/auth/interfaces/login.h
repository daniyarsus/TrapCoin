#pragma once

#include "src/application/auth/dto/login.h"
#include "src/application/auth/results/login.h"

class ILoginUserService {
public:
    virtual ~ILoginUserService() = default;

    virtual CreateJwtsByEmailResult createJwtsByEmail(
        const CreateJwtsByEmailDto& dto
    );

    virtual RefreshAccessTokenResult refreshAccessToken(
        const RefreshAccessTokenDto& dto
    );
};
