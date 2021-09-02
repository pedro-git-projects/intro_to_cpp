#include <iostream>
using namespace std;

//global variable
int g = 1;

void func3()
{   
    //the global variable remains unchaged for there is
    //a local variable with the same name in the scope of the function
    int g = 0;
    g += 100;
    cout << "exec #03" << endl;
}

void func2()
{
    g += 10;
    func3();
    {
        int a = 3;
        cout << a << endl;
    }
    //cout << a << endl; out of scope variable
}

void func1()
{
    g++;
    func2();
}


int main()
{   
    func1();
    cout << g << endl;
    return 0;    
}


