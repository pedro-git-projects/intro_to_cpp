#include <iostream>
using namespace std;

int main()
{
    //unlike references, we may create a pointer and not initialize it
    int*p1;
    int* p2 = nullptr; //creating a null pointer
    //using pointers we're also able to change reference 

    int x = 5;
    int y = 10;

    p1 = &x; //reference of x is now stored in the pointer p1;
    cout << *p1 << endl; 

    p1 = &y;
    cout << *p1 << endl;

    p2 = p1; //if later p2 points to something else, p1 will always point to the same adress
    cout << *p2 << endl; 
    
    return 0;
}