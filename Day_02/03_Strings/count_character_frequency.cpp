#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	char ch;

	cout << "Enter a string: ";
	cin >> str;

	cout << "Enter a character: ";
	cin >> ch;

	int frequency = 0;
	for(int i=0; i<str.length(); i++)
  {
		if(str[i] == ch)
    {
			frequency++;
		}
	}

	cout << "Frequency: " << frequency;
	return 0;
}

/*
Expected Output:
-----------------
Enter a string: hello
Enter a character: l
Frequency: 2
-----------------
*/
