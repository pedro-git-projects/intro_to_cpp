#include <iostream>
using namespace  std;

int add (int x, int y)
{
    return x + y;
}

int add (int x, int y, int z)
{
    return x + y + z;
}


double add (double x, int y)
{
    return x + y + 100;
}


double add ( int x, double y)
{
    return x + y + 100;
}


//METHOD OVERLOAD: a function signature consists in the name of the function and its parameters
//functios can be equal in every aspect if they don't have the same signature
//what the function returns isn't part of the fucntion signature
/* double add ( int a, double b)
{
    return a + b + 300;
}
 */


/* bool add ( int x, double y)
{
    return true;
}
 */


int main()
{
    //the compiler is able to tell both functions apart for they have a different number of arguments
    cout << add(10, 20) << endl; 
    cout << add(10, 20, 30) << endl;
    //different types
    cout << add(10.0, 20) << endl;
    // types in different order
    cout << add(10, 20.0) << endl;

    return 0;
}