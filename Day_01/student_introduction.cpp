#include <iostream>
#include <string>

using namespace std;
int main() 
{
    cout << "Enter your name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!\n";

    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout << "You are " << age << " years old.\n";

    cout << "Enter your branch: ";
    string branch;
    cin >> branch;
    cout << "You are in the " << branch << " branch.\n";

    return 0;
}  

/*
Expected Output:
-----------------
Enter your name: Alice
Hello, Alice!
Enter your age: 20
You are 20 years old.
Enter your branch: CS
You are in the CS branch.
-----------------
*/
