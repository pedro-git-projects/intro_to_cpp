#include <iostream>
using  namespace std;

int main()
{
    /*
    variables that will have their value passed by ref MUST be initialized
    string& badRef = ;
    string& badRef = nullptr; 
    */

    string greeting = "Sup?"; 
    string& ref = greeting; //ref will have the same referencec as greeting

    string name = "Pedro"; //aponta pra pedro
    ref = name; //ref a ponta para pedro

    cout << name << ref << greeting << endl;
    cout << &greeting << "\t" << &ref << endl; //same adress
    cout << &name << endl;  //has another adress

    ref.append("!!!!!!");

    cout << greeting; 

    
    return 0;
}