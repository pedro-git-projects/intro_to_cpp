#include <iostream>
using namespace std;
//indetermined for
int main()
{
    double number = 0;
    double total = 0;
    int qty = 0;

    for(; number != -1;)
    {
        cout << "Enter a number. To finish enter -1 to finish: " << endl;
        cin >> number;
        if(number != -1)
        {
            total += number;
            qty++;
        }
        
    }

    cout << "The sum of all entered numbers was " <<total << endl;
    cout << qty << " numbers were entered." << endl;
    cout << "The average is " << total/qty << endl;
    return 0;
}