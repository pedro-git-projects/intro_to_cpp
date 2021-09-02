#include <iostream>
using namespace std;
//recursion


// 5! = 5 * 4 * 3 * 2 * 1
// 5! = 6 * 5!
// 5! = 6 * 5 * 4!
// 5! = 5 * 4 * 3!
// 5! = 5 * 4 * 3 * 2!
// 5! = 5 * 4 * 3 * 2 * 1!
// 5! = 5 * 4 * 3 * 2 * 1 by the definition of factoreal 

int nonRecursiveFactorial(int n)
{
    int total = 1;
    for(int i = 2; i <= n; i++)
    {
        total *= i;
    }
    return total;
}


int factorial(int n)
{
    if(n == 1) return 1;
    return n * factorial(n - 1);
}

int main()
{
    cout 
    << factorial(5) << endl
    << nonRecursiveFactorial(5) << endl;
     
    return 0;
}