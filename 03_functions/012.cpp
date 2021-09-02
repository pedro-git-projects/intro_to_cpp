#include <iostream>
using namespace std;
/*
Passing a function as a parameter to another function using pointers
we define a function that recieves a function pointer as an argument!
*/
int exec(int (*func)(int, int), int a, int b)
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

int main()
{
    cout << exec(add, 28, 7) <<endl
         << exec(subtract, 28, 7) <<endl;

    return 0;
}