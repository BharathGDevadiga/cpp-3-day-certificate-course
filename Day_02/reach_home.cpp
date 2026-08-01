#include <iostream>
using namespace std;

void reachHome(int src, int des)
{
	cout << src << " -> " << des << endl;
    
	if(src == des)
    {
		return;
	}

	reachHome(src + 1, des);
}

int main()
{
	reachHome(1, 10);

	return 0;
}

/*
Expected Output:
-----------------
1 -> 10
2 -> 10
3 -> 10
4 -> 10
5 -> 10
6 -> 10
7 -> 10
8 -> 10
9 -> 10
10 -> 10
-----------------
*/
