#include<iostream>
using namespace std;

class calculator
{
public:
    int add(int a, int b)
    {
        return a+b;
    }
    int add(int a, int b, int c)
    {
        return a+b+c;
    }
};
int main()
{
    calculator c;
    cout<<"Addition of 2 numbers: "<<c.add(10,20)<<endl;
    cout<<"Addition of 3 numbers: "<<c.add(10,20,30)<<endl;
    return 0;
}
