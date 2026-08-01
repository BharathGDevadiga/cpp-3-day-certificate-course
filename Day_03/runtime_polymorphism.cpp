#include<iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout<<"Animal sound"<<endl;
    }
};
class dog:public Animal
{
public:
    void sound()
    {
        cout<<"Dog barks"<<endl;
    }
};
int main()
{
    Animal *a1;
    dog d1;
    a1=&d1; 
    a1->sound();
    return 0;
}

/*
Expected Output:
-----------------
Dog barks
-----------------
*/
