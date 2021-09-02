#include <iostream>


int main()
{
    //type inference
    auto a = 1; //integers are awlays inferred to int no long long ing, short int...etc
    auto b = 1.2; //literally assigned values will be double (and not float)
    auto c = false;
    
    int d = 1;
    double e = 1.2;
    bool f = false;

    //it is not possible to change an inferred type
    
    std::cout 
    << typeid(a).name() << std::endl 
    << typeid(b).name() << std::endl 
    << typeid(c).name() << std::endl
    << typeid(d).name() << std::endl
    << typeid(e).name() << std::endl
    << typeid(f).name() << std::endl;

    return 0;
}