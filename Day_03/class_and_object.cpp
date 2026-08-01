#include<iostream>
using namespace std;

class student
{
public:
    string name;
    int age;

    void display()
{
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
}
};
int main()
{
    student s1;
    s1.name="Bharath";
    s1.age=21;
    s1.display();
}
