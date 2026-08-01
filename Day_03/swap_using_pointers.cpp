#include <iostream>
using namespace std;

void swapNumbers(int *first, int *second) 
{
    int temporary = *first;
    *first = *second;
    *second = temporary;
}

int main() 
{
    int a = 10;
    int b = 20;

    cout <<"Before swapping "<<endl;
    cout <<"a = " << a <<endl;
    cout<<"b = " << b << endl;
  
    swapNumbers(&a, &b);
  
    cout <<"After swapping"<<endl;
    cout <<"a = " << a <<endl;
    cout<<"b = " << b << endl;

    return 0;
}
