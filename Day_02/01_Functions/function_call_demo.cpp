#include <iostream>

using namespace std;

void bangalore()
{
    cout<<" IT Hub ";
}

void city()
{
    cout<<" Udupi ";
    bangalore();
}

int main()
{
    city();
    return 0;
}

/*
Expected Output:
-----------------
 Udupi  IT Hub 
-----------------
*/
