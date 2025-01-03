#pragma once

#include "src/application/auth/dto/register.h"
#include "src/application/auth/results/register.h"

class IRegisterUserService {
public:
    virtual ~IRegisterUserService() = default;

    virtual SendRegisterCodeResult sendRegisterCode(
        const SendRegisterCodeDto& dto
    );

    virtual AcceptRegisterCodeResult acceptRegisterCode(
        const AcceptRegisterCodeDto& dto
    );
};
