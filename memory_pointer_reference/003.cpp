#include <iostream>
using namespace std;

int main()
{   
    /*
        Why not "int& xRef = &x"
        -------------------------------------
        At compile time all instances of xRef
        are replaced with the adress of 'x'   
    */
    
    int x = 7;
    //& will force our pass to reference
    int& xRef = x;

    cout << x << "\t" << &x << endl;
    cout << xRef << "\t" << &xRef << endl;
    //both are referencing the same memory adress

    x++;
    cout << xRef << endl;

    xRef--;
    cout << x << endl;

    //altering any one variable will impact all other referenced values
    
    return 0;
}