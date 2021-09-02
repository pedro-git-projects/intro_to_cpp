#include <iostream>
using namespace std;

double greatest(double n1, double n2)
{
    return n1 >= n2 ? n1 : n2;
}

int main()
{
   double a, b, c;

   cout << "Enter the first number: ";
   cin >> a;

   cout << "Enter the second number: ";
   cin >> b;

   cout << "Enter the third number: ";
   cin >> c;

    cout << "Greatest: " << greatest(a, greatest(b, c)); //first executes g(b,c) then uses the result as a parameter with a
    return 0;
}