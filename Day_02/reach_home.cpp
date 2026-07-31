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
