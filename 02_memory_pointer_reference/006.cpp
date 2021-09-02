#include <iostream>
using namespace std;

int main()
{
    /*
    What is a pointer
    --------------------------------------
    A pointer is a variable whose value is 
    the adress of another variable, i.e., 
    direct adress of the memory location
    */

   int value = 98765;
   int& ref = value;
   int* pot = &value; //in a pointer we get the referecne

   //dereferencing a pointer
   cout << value << "\t" << ref << "\t" << *pot << endl;
   //notice how we do not need to pass & to read the adress in a pointer variable
   cout << &value << "\t" << &ref << "\t" << pot << endl; 

   return 0;
}