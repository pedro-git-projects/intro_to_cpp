#include <iostream>
using namespace std;

//storing lambdas inside variables
auto add = [](int x, int y) ->  int { return x + y;};
auto subtract = [](int x, int y) ->  int { return x - y;};

using binaryOp = int(*)(int, int);

int exec(binaryOp func, int a, int b)
{
    return (*func)(a,b);
}

int main()
{
    cout << add(10,20) << endl;
    cout << subtract(15,20) << endl;
    
    cout << exec(add, 33, 44) << endl
         << exec(subtract, 7, 2) << endl;
    
    //passing a lambda directly
    cout << exec([](int x, int y) ->  int { return x - y;}, 7, 2) << endl;
    return 0;
}