#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter the initial value: ";
    cin >> x;

    x += 10;
    cout << "The assignment sum is: " << x << endl;

    x -= 10;
    cout << "The assignment subtraction is: " << x << endl;

    x *= 10;
    cout << "The assignment multiplication is: " << x << endl;
   
    x /= 10;
    cout << "The assignment division is: " << x << endl;
    
    x %= 10;
    cout << "The assignment modulo is: " << x << endl;
    
    return 0;
}