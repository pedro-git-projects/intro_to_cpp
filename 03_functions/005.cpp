#include <iostream>
using namespace std;

//not using empty strings via logical operators
void log(string text)
{
    if(!text.empty())
    {
        cout << "Text: " << text << endl;
    }
    
}

//not usigin empty strings via return
void logReturn(string text)
{
    if(text.empty()){
        return; //returns to the method that was called, ie: logReturn
    }
    cout << "Text: " << text << endl;
}

//using more than one return
bool multipleReturn(string text)
{
  if(text.empty()) return false;
  if(text == "Hello") return false;

  cout << "Text :" << text << endl;
  return true;
}

int main()
{
    log("");
    log("Ok");

    logReturn("");
    logReturn("It is working");

    multipleReturn("Testing");
    cout << multipleReturn("Testing") << endl;
    multipleReturn("Hello");
    cout << multipleReturn("Hello") << endl;
    return 0;
}
