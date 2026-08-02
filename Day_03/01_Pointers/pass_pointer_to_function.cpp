#include<iostream>
using namespace std;

void change(int *p)
{
    *p=500;
}
int main()
{
    int x=10;
    change (&x);
    cout<<x<<endl;
}

/*
Expected Output:
-----------------
500
-----------------
*/
