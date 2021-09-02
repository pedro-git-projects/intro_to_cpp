#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << argc << std::endl;
    std::cout << argv[0] << std::endl; //the argument which is used is the path to the application
    if(argc >= 2)
    {
        std::cout << argv[1] << std::endl;
    }
    return 0;
}
