#include <iostream>
using namespace std;

//primitive types

int main()
{
    bool isAdmin = 1; // true, false. 0 and != 0 
    cout << isAdmin <<endl;

    char symbol = '#';
    cout << symbol << endl;

    //datatype modifiers
    //signed unsigned long short
    unsigned short int age = 23;
    cout << age << endl;

    float pi = 3.14; //32bit - single precision floating point types
    const double PI = 3.141592;
    cout << pi << endl;
    cout << PI << endl;

    short int n1 = 1;
    long int n2 = 1;
    unsigned int n3 = 1;
    long long int n4 = 1;

    cout << n1 + n2 +n3 +n4 << endl;

    cout << sizeof(char) << " byte" << endl;
    cout << sizeof(int) << " bytes" << endl;
    cout << sizeof(long int) << " bytes" << endl;
    cout << sizeof(long long int) << " bytes" << endl;
    cout << sizeof(float) << " bytes" << endl;
    cout << sizeof(double) << " bytes" << endl;
    
    return 0;

}