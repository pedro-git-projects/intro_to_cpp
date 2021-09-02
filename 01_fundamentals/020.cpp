#include <iostream>
using namespace std;

int main() 
{
    double n1, n2, n3;
    cout << "Enter three numbers: " << endl;
    cin >> n1;
    cin >> n2;
    cin >> n3;

    if(n1 >= n2 && n1 >= n3)
    {
        cout << "The biggest number is: " << n1 << "." << endl;
    } else 
    {
        if(n2 >= n1 && n2 >= n3)
        {
            cout << "The biggest number is: " << n2 << "." << endl;
        } else 
        {
            if(n3 >= n1 && n3 >=n2)
            {
                cout << "The biggest number is: " << n3 << "." << endl;
            }
        } 
    }
    
    return 0;

}