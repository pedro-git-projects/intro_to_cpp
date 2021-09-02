#include <iostream>
using namespace std;

void func3()
{
    cout << "exec #03" << endl;
}

void func2()
{
    func3();
}

void func1()
{
    func2();
}


int main()
{   
    func1();
    return 0;    
}


