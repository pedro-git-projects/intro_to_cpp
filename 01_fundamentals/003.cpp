#include <iostream>
#include <cstdio> //preprocessor directive for C 

int main() 
{
    //cout makes use of the standard system output (the screen)
    // '::' scope resolution operator,resolves into the std namespace (standard)
    std::cout << "Olá C++ #01" << std::endl;
    //There aren't namespaces in C
    printf("Olá C++ #02 \n"); //\n indicates a new language
    puts("Olá C++ #03");
    return 0;
}