#include <iostream>
using namespace std;

int main()
{
    double pi = 3.14;
    double& piRef = pi;
     
    /*
    Even though piRef is a reference we're able to acess it's value
    If we wanted to acecss it's reference we would need the '&' operator
    */
    cout << piRef << endl;
    cout << &piRef << endl;
    // '*' dereference operator
    //think of as "Get value at <memory adress>"
    cout << *&pi << endl;
    cout << &*&pi << endl;
    cout << *&*&pi << endl;
    return 0;
}