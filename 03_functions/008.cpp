#include <iostream>
using namespace std;



int nextId()
{
    static int id = 1; //will be executed only once, and will make so that id has state!
    //first returns, THEN increments
    return id++;
}

int main()
{
    cout << nextId() << endl;
    cout << nextId() << endl;
    cout << nextId() << endl;
    cout << nextId() << endl;
    
    return 0;
}