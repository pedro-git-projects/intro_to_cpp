#include <iostream>
using namespace std;

int main()
{
    string names[] = { "Pedrão", "Tati", "Dias", "Sander", "Taro"};
    //modifying elements
    names[4] = "Sandro";

    // fixed size
    for(int i = 0; i < 5; i++)
    {
        cout << names[i] << " " << endl;
    }

    //dynamic size
    int size = sizeof names / sizeof names[0];
    for(int i = 0; i < size; i++)
    {
    cout << names[i] << " ";
    }

       
    //trying to acess an element that doesn't exist causes the program to acess the next memory adress

    return 0;
}