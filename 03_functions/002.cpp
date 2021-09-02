#include <iostream>
#include "002_function.h"
using namespace std;


int main()
{
    log(3, false);
    log(4, false);
    log(5, false);
    log();
    
    return 0;
}

void log(int number, bool newLine)
{
    cout << "Number:" << number;
    newLine ? cout << endl : cout << " ";
}

