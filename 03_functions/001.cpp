#include <iostream>
using namespace std;

//functions/procedures are a consequence of strucutred programming

void sayHello()
{
    cout << "Hello\n";
    //return;
} 

void sayHelloTo(string name) 
{
    cout << "Hello " << name << "!" << endl;
}

string returnHi()
{
    return "Hi!";
}

string returnHiTo(string name)
{
    return "Hi, " + name + "!";
}

int main()
{
    sayHello();
    sayHelloTo("Pedrão");
    returnHi(); //it returned hi, but you need to do smt w/ it to be able to check it
    //to solve this, we can, for instance assign the value to a result
    string result = returnHi();
    result.append("!!!!");
    cout << result << endl;
    //we can call a function direct on console
    cout << returnHi() << endl;
    cout << returnHiTo("Tati") << endl;
    return 0;     
}