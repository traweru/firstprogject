#include <iostream>
#include "generationPassword.h"

int main()
{
    //Генерация пароля
    std::string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
    
    generationPassword genPass(charset);
    std::string password = genPass.generate();
    
    std::cout << "Generated password: " << password << std::endl;
    
    return 0;
}
