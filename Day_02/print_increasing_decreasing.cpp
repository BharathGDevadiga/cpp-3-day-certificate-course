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
