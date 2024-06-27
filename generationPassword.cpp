#include "generationPassword.h"

generationPassword::generationPassword(const std::string& chars)
    : charset(chars)
{
    srand(time(0));
    length = rand() % 5 + 8; // случайная длина пароля от 8 до 12 символов
}

std::string generationPassword::generate()
{
    std::string password;
    for (int i = 0; i < length; ++i)
    {
        password += charset[rand() % charset.length()];
    }
    return password;
}
