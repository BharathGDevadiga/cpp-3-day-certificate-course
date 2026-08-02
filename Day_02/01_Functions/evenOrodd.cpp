#include <iostream>
using namespace std;

bool isEvent(int num)
{
    if(num%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(isEvent(num))
    {
        cout << num << " is even." << endl;
    }
    else
    {
        cout << num << " is odd." << endl;
    }
    return 0;
}   

/*
Expected Output:
-----------------
Enter a number: 4
4 is even.
-----------------
*/
