#include <iostream>
using namespace std;

int main()
{
    //insertion operator
    cout << "Insere na saída padrão\n";
    cout << 3.14 << endl; 
    
    int imprimindo_var_com_cout = 3;

    cout << imprimindo_var_com_cout << endl;

    
    cout << "Enter your name: "; //prompts the user.
           
    string nome;
    //extraction operator
    //will read from the standard input (keyboard)
    cin >> nome;
    cout << nome;
    
    return 0; 

}