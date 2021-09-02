#include <iostream>

int main() 
{
    int postfix = 2;
    int prefix = 1;

    std::cout << postfix << std::endl;
    postfix++; 
    ++prefix; 
    std::cout << postfix << " " << prefix << std::endl;

    postfix--;
    --prefix;
    std::cout << postfix << " " << prefix << std::endl;
    
    //postfix = 2 prefix = 1
    bool test = postfix-- == ++prefix; //first prefix, then postfix, then ==
    std::cout << test << std::endl;
    
    return 0;
}