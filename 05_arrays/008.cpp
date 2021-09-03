#include <iostream>
using namespace std;

//strings as arrays of characters
int main()
{
    string abc = "abcdefghijklmnopqrstuvwxyz";

    cout << abc[9] << endl; //print the 10nth letter of the alphabet
	//altering the value of a character on a string trough the array index associated to it
	abc[9] = '?';
	
	for(char l: abc)
	{
		cout << l << "," << endl;
	}
	return 0;
}
