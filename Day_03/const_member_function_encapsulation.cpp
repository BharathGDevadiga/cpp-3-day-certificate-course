#include<iostream>
using namespace std;

class student
{
private:
    string name;

public:
//constructor
    student()
{
        name="unknown";
    }
        //setter -modify
    void setName(string n)
{
        name = n;
    }
    //getter-access
    string getName() const 
{
        return name;
    }
};
int main()
{
    student s1;
    s1.setName("Bharath");
    cout<<s1.getName();
    return 0;
}

//encapsulation
