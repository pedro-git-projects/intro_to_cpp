#include <iostream>

int main() 
{
    //prompt the user for the radius and calculate the area
    std::cout << "Enter the radius: " << std::endl;
    
    //creating a constant variable 
    const double PI = 3.1415926535;
    double radius; 
    
    std::cin >> radius;
    double area = PI * (radius * radius);
    std::cout << "The area is: " << area;

    return 0;
}