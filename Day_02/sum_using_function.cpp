#include <iostream>
using namespace std;

int add(int first, int second)
{
    return first + second;
}

int main() 
{
    int number1, number2;

    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    cout << "Sum: " << add(number1, number2);

    return 0;
}

/*
Expected Output:
-----------------
Enter two numbers: 10 20
Sum: 30
-----------------
*/
