#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if(i == 5) 
        {
            break;
        }
        cout << i << endl;
    }
    cout << "end" << endl;
    return 0;
}