#include <iostream>
using  namespace std;
//else 

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if(number % 2 == 0)
    {
        cout << "Even number." << endl;
        
    } else 
    {
        cout << "Odd number." << endl;
    }
}