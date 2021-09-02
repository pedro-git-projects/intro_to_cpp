#include <iostream>
using namespace std;

//print the largest number
//using only if
int main() 
{   
    double number1, number2, number3;
    cout << "Enter three numbers: " << endl;
    cin >> number1;
    cin >> number2;
    cin >> number3;    

    if(number1 >= number2 && number2 >= number3) 
    {
         cout << "The biggest number is " << number1 << "." << endl;
    }    
    
        if(number2 >= number1 && number2 >= number3) 
    {
         cout << "The biggest number is " << number2 << "." << endl;
    }    
        if(number3 >= number1 && number3 >= number2) 
    {
        cout << "The biggest number is " << number3 << "." << endl;
    }    
    return 0;
}