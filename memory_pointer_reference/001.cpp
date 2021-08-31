#include <iostream>
using namespace std;

int main()
{   
    //pass by copy
    int a = 2;
    int b = a; //assignment copies the value

    a++;
    b--;

    cout << a << " " << b << endl;

    return 0;
}