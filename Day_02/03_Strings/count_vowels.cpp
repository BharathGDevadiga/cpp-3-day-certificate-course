#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "hello";

    int vowelCount = 0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowelCount++;
        }
    }

    cout << "Number of vowels: " << vowelCount;
    return 0;
}

/*
Expected Output:
-----------------
Number of vowels: 2
-----------------
*/
