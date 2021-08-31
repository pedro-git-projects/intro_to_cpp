#include <iostream>
using namespace std;

int main()
{
    int arr[] = {47, 33, 72, 13, 88};
    cout << &arr[0] << endl;
    
    //acessing an array element via pointer
    int* p1 = &arr[0];
    cout << *p1 << endl;

    //acessing array elements via pointer arithmetic
    p1++;
    cout << *p1 << endl;

    p1++;
    cout << *p1 << endl;
    
    cout << "..." << endl;
    cout << p1[0] << endl; // [0] is the same as *
    cout << p1[1] << endl; //now the indexes are relative to where we stopped [72]
    cout << p1[2] << endl; 

    int w = 123;
    int* p2 = &w;

    cout << p2 << endl;
    cout << *p2 << endl;
    cout << p2[0] << endl; //dereferencing something that is NOT an array using [0]

    //altering the value of a variable trough an array
    *p2 = 321;
    cout << 
    *p2 << endl
    << w << endl;

    return 0;
    
}