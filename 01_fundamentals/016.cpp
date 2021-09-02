#include <iostream>
using namespace std;
//ternary operator 

int main()
{
 bool sunny = true;
 //exp(T/F) ? T : F
 string result = sunny ? ":)" : ":(";
 cout << result << endl;

double balance = 1234.56;
double value; 
cout << "Enter the value of the transaction: " << endl;
cin >> value;

char creditOrDebt;
cout << "Credit (c)/Debt (d): ";
cin >> creditOrDebt;

cout << "Balance [Before]: " << balance << endl;

//sum assignment according to ternary operator
balance += creditOrDebt =='c' ? value : -value;

cout << "Balance [After]: " << balance << endl;

return 0;
}