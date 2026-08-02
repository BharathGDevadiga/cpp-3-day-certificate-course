#include <iostream>
using namespace std;

float area (float radius)
{
    float result=3.14*radius*radius;
    return result;
}

int main()
{
    float radius;

    cout << "Enter radius: ";
    cin >> radius;
    float ans=area(radius);
    cout << "Area of circle: " << ans;
    return 0;
}

/*
Expected Output:
-----------------
Enter radius: 5
Area of circle: 78.5
-----------------
*/
