#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int* p=&a;
    int **pp=&p;
    cout<<**pp<<endl;
    cout<<*p<<endl;
    return 0;
}

/*
Expected Output:
-----------------
10
10
-----------------
*/
