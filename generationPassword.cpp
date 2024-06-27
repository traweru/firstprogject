#include "generationPassword.h"

generationPassword::generationPassword(const std::string& chars)
    : charset(chars)
{
    srand(time(0));
    length = rand() % 5 + 8; // генерация случайной длины от 8 до 12
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