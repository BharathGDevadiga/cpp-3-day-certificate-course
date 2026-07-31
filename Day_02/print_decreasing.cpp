#include <iostream>
using namespace std;

void dec(int x)
{
	if(x == 0)
{
		return;
	}

	cout << x << endl;
	dec(x - 1);
}

int main()
{
	dec(5);
	return 0;
}
