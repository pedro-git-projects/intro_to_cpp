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

    //easier
    cout << "\nForeach...\n";
    for(string s: names)
    {
        cout << s << endl;
    }
    
    return 0;
}