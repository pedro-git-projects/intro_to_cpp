//params by copy and ref
#include <iostream>
using namespace std;

void incCopy(int value)
{
    value++;
}

void incRef(int& value)
{
     value++;
}

int main()
{
    //pass by copy - the value won't change
    int x = 1;
    incCopy(x);
    cout << x << endl;  
    
    //pass by reference
    incRef(x);
    cout << x << endl;
    return 0;
}