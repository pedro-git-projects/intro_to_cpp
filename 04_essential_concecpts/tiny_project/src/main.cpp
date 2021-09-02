#include <iostream>
#include "functions/calc.h"
using namespace std;

int main()
{
    cout << calc::add(10,20) << endl;
    cout << calc::subtract(10,20) << endl;
    return 0;
}