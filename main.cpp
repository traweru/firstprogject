#include <iostream>
#include "generationPassword.h"
#include "shifrovanie.h"

int main()
{
    //Генерация пароля
    //std::string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
    
    generationPassword genPass;
    std::string password = genPass.generate();
    
    std::cout << "Generated password: " << password << std::endl;
    
    // Шифрование

    string shifr = encrypt(password);
    std::cout << "Encrypt password: " << shifr << std::endl;

    string pass = decrypt(shifr);
    std::cout << "Decrypt password: " << pass << std::endl;

    return 0;
}
