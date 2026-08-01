#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int *p=&a;
    *p=100;
    cout<<a<<" "<<p<<" "<<&a<<" "<<*p<<endl;
    return 0;
}

/*
Expected Output:
-----------------
100 0x(address) 0x(address) 100
-----------------
*/
