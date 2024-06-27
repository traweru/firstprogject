#pragma once
#include <string>
#include <ctime>
#include <cstdlib>

class generationPassword
{
private:
    int length;
    std::string charset;

public:
    generationPassword(const std::string& chars);
    std::string generate();
};