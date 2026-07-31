#include <iostream>
using namespace std;

void printName(string name, int n)
 {
    if (n == 0) {
		return;
	}

    cout << name << endl;
    printName(name, n - 1);
}

int main() 
{
    string name;
    int n ;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter the number of times to print: ";
    cin >> n;

    printName(name, n);

    return 0;
}
