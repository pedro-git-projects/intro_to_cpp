#include <iostream>
using namespace std;
//structured programming

int main()
{
    double  finalGrade;
    cout << "Enter the final grade: ";
    cin >> finalGrade;

    if( finalGrade >= 7)
    {
        cout << "Excellent grande." << endl;
        cout << "Congratulations!" << endl;
    }
    
    return 0;
}