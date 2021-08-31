#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    
    cout << a << "\t" << &a << endl; //'&' acess the memory adress

    string name = "Pedro";

    cout << name << "\t" << &name << endl; 
    
    return 0;
}