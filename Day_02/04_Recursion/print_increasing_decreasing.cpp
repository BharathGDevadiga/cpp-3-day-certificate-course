#include <iostream>
using namespace std;

void printMixed(int x)
{
	if(x == 0)
{
		return;
	}

	cout << x << " ";
	printMixed(x - 1);
	cout << x << " ";
}

int main()
{
	printMixed(5);
	return 0;
}

/*
Expected Output:
-----------------
5 4 3 2 1 1 2 3 4 5 
-----------------
*/
