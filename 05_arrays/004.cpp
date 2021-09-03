#include <iostream>
using namespace std;

int main()
{
    string names[] = { "Pedrão", "Tati", "Dias", "Sander", "Taro"};
    
    //more flexible
    for(int i = 0; i < 5; i++)
    {
        cout << names[i] << endl;
    }

    //test if we're passing by copy or reference by appending !!! and checking if the value is altered aftewards
    cout << "\nForeach copy\n";
    for(string s: names)
    {
        s.append("!!!!");
        cout << s << endl;
    }
    
    cout << 
    endl << names[0] << endl; 
    //seeing that the values haven't changed, we know it was PASS BY COPY     



    cout << "\nForeach reference\n";
    for(string &s: names)
    {
        s.append("!!!!");
        cout << s << endl;
    }

    cout << 
    endl << names[0] << endl;

// if, for memory reasons we want to pass by reference, but not change the value we may use a const

 cout << "\nForeach reference\n";
    for(auto const &s: names)
    {
        // s.append("!!!!");
        cout << s << endl;
    }

    cout << 
    endl << names[0] << endl;

    return 0;
}