#include <iostream>
using namespace std;
//namespaces make so that what is defined withn them is acessible only by a resolution operator
int add(int a, int b)
{
    return a + b + 10;
}

namespace calc 
{
    int add(int a, int b)
    {
        return a + b + 20;
    }
    int subtract(int a, int b)
    {
        return a - b;
    }
}

int main()
{
    cout << add (10, 20) <<  endl
    << calc::add(10, 20) << endl
    << calc::subtract(10, 20) << endl; 
    return 0;
}