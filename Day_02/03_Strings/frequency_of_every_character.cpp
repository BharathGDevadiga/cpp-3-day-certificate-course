#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int frequency[256] = {0};

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i=0; i<str.length(); i++)
    {
        frequency[(unsigned char)str[i]]++;
    }

    cout << "Character frequencies:" << endl;
    for(int i=0; i<256; i++)
    {
        if(frequency[i] > 0)
        {
            if(i == ' ')
            {
                cout << "space: " << frequency[i] << endl;
            }
            else
            {
                cout << char(i) << ": " << frequency[i] << endl;
            }
        }
    }

    return 0;
}

/*
Expected Output:
-----------------
Enter a string: hello world
Character frequencies:
space: 1
d: 1
e: 1
h: 1
l: 3
o: 2
r: 1
w: 1
-----------------
*/
