#include <iostream>
using namespace std;

void inc(int x)
{
	if(x == 0)
  {
		return;
	}

	inc(x - 1);
	cout << x << endl;
}

int main()
{
	inc(5);
	return 0;
}

/*
Expected Output:
-----------------
1
2
3
4
5
-----------------
*/
