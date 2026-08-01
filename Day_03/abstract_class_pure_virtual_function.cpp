#include<iostream>
using namespace std;

class vehicle
{
public:
    //abstract method (pure virtual function)
    virtual void start()=0;

    //concrete method
    void fuel()
    {
        cout<<"Vehicle fuel"<<endl;
    }
};

class car : public vehicle
{
    public: 
        //implementing abstract method
    void start()
    {
        cout<<"Car starts"<<endl;
    }
};

int main()
{
    car c;
    c.start();
    c.fuel();
    return 0;
}
