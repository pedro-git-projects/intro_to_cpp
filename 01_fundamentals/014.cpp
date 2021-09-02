#include <iostream>
using namespace std;
//logical operators
int main()
{
    double finalGrade;
    cout << "Enter the final grade: ";
    cin >> finalGrade;

    bool goodBehaviour;
    cout << "Is he/she well behaved? ";
    cin >> goodBehaviour;

    bool goodStudent = finalGrade >= 9 && goodBehaviour;
    bool averageStudent = finalGrade >= 9 ^ goodBehaviour; //exclusive or
    bool badStudent = finalGrade <= 3 && !goodBehaviour;
    bool loanCancelled = finalGrade <= 3 || !goodBehaviour;

    cout << "Good student? " << goodStudent << endl;
    cout << "Average student? " << averageStudent << endl;
    cout << "Bad student? " << badStudent << endl;
    cout << "Will the loan be cancelled? " << loanCancelled << endl;

    return 0;
}