#include <iostream>
using namespace std;

int main() 
{
    int i=0;
    while(i<4)
    {
    i=i+1;
    if(i%2!=0)
      cout<<"vjit"<<endl;
    else
      cout<<i<<endl;
    }
}  

/*
Expected Output:
-----------------
vjit
2
vjit
4
-----------------
*/
