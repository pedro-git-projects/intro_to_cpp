#include <iostream> 
using namespace std;
//array revision before next pointer explanation
int main()
{
    //[<array size>]
    int values[4];
    
    //will initialize as if it were [4]
    //              0    1   2   3
    int values2[] ={31, 69, 23, 45};
    
    //acessing trough index
    cout << values2[0] <<endl;
    cout << sizeof values2[0] << endl;
    cout << sizeof values2 << endl;
    cout << sizeof values / sizeof values[0] << endl;

    return 0;
}