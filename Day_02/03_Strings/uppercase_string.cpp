#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter lowercase text: ";
   cin>>str;

    for(int i=0; i<str.length(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    
    cout << "Uppercase text: " << str;
    return 0;
}

/*
Expected Output:
-----------------
Enter lowercase text: hello
Uppercase text: HELLO
-----------------
*/
