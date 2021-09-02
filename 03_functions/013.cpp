#include <iostream>
using namespace std;

using binaryOp = int(*)(int, int); //using typedef in order to simplify the code
/*
Passing a function as a parameter to another function using pointers
we define a function that recieves a function pointer as an argument!
*/
int exec(binaryOp func, int a, int b)
{
    return (*func)(a,b);
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int lesser (int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    cout << exec(add, 28, 7) <<endl
         << exec(subtract, 28, 7) <<endl
         << exec(lesser, 28, 7) <<endl;

    return 0;
}