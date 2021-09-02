#include <iostream>
//string

int main()
{
    //String is not a primitive type, but a class
    //thus the use of 'std::'
    std::string title = "Mr. ";
    //other ways of initializing strings
    std::string name("Pedrão");
    std::string end(10, '!');

    //a class has behaviours and attributes
    std::cout << name.size() << std::endl; 
    //when inside a class, a function is called a method
    std::cout << name.back() << std::endl;
    std::cout << name[0] << std::endl;  
    
    //String concatenation
    std::cout << title + name << std::endl;
    //realize that the value of the involved variables remains unaffected
    std::cout << title << std::endl;
    std::cout << name << std::endl;

    //actually changing the value
    name += " e Tati"; // name = name + " Tati";
    std::cout << name << std::endl;
    std::cout << name.append(end) << std::endl;
    //note that the value actually changed
    std::cout << name << std::endl;
    return 0;
}