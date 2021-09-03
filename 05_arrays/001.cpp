#include <iostream>
using namespace std;
/*
arrays are homogeneus (single type)
fixed size
indexed
*/
int main()
{
    string names[5];
    names[0] = "Pedrão";
    names[1] = "Tati";
    names[2] = "Dias";
    names[3] = "Sander";
    names[4] = "Taro";
    
    cout << names[0] << endl;
    cout << names[1] << endl;
    cout << names[2] << endl;
    cout << names[3] << endl;
    cout << names[4] << endl;
    
    //trying to acess an element that doesn't exist causes the program to acess the next memory adress

    return 0;
}