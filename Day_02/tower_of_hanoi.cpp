#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char helper, char destination)
{
	if(n == 0)
  {
		return;
	}

	towerOfHanoi(n - 1, source, destination, helper);
	cout << "Move disk " << n << " from " << source<< " to " << destination << endl;
	towerOfHanoi(n - 1, helper, source, destination);
}

int main()
{
	towerOfHanoi(3, 'A', 'B', 'C');
	return 0;
}

/*
Expected Output:
-----------------
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C
-----------------
*/
