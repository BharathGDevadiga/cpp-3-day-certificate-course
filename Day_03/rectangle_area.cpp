#include<iostream>
using namespace std;

class rectangle
{
public:
    int length;
    int breadth;

    int area()
{
        return length*breadth;
    }
};
int main()
{
    rectangle r1;
    r1.length = 10;
    r1.breadth = 5;
    cout << "Area of rectangle: " << r1.area() << endl;
}
