#include<iostream>
using namespace std;

//parent class
class Animal
{
public:
    string name;
   
    void eat()
    {
        cout<<"Animal is eating"<<endl;
    }
   
    };

//child class
class Dog:public Animal
{
public:
    void bark()
    {
        cout<<"Dog is barking"<<endl;
    }
};

int main()
{
    Dog d1;
    d1.eat(); // Inherited from Animal
    d1.bark(); // Specific to Dog
    return 0;
}

/*
Expected Output:
-----------------
Animal is eating
Dog is barking
-----------------
*/
