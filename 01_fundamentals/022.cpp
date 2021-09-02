#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    //we control the number of repetitions by incrementing our index.
    while(i < 10)
    {
        i++;
        cout << i << endl;
    }

    //print all even numbers up to 100
    
    while (i <= 100)
    {
        if( i % 2 == 0)
        {
            cout << i++ << endl;
            i++;    
        } else
        {
            i++;
        }
        
    }
    
    //print all even numbers starting from 100
    int j = 100;
    while (j >= 0)
    {
        cout << j << endl;
        j -=2;
    }
    
    return 0;
}