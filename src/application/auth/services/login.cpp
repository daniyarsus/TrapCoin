#include "login.h"

CreateJwtsByEmailResult LoginUserService::createJwtsByEmail(
    const CreateJwtsByEmailDto& dto
) {
    CreateJwtsByEmailResult result = {true, ""};
    return result;
}

RefreshAccessTokenResult LoginUserService::refreshAccessToken(
    const RefreshAccessTokenDto& dto
) {
    RefreshAccessTokenResult result = {true, ""};
    return result;
}
