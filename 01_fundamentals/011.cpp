//arithmetic operators 
#include <iostream>
using namespace std;

int main() 
{
    //binary and infix
    cout 
    << 2 + 2 << endl
    << 2 - 2 << endl
    << 2 * 2 << endl
    << 2 / 2 << endl
    << 2 % 2 << endl; //modulo is for integers only

    double x, y;
    cout << "Enter the first number: " << endl;
    cin >> x;
    cout << "Enter the second number: " << endl;
    cin >> y;
    
    cout 
    << "The sum is " << x + y << endl
    << "The subtraction is  " << x - y << endl
    << "The multiplication is  " << x * y << endl
    << "The division is  " << x / y << endl;

    int z, w;
    cout << "Enter the first integer: " << endl;
    cin >> z;

    cout << "Enter the second integer: " << endl;
    cin >> w;

    cout << "The modulo is " << z % w << endl;

    return 0;
}