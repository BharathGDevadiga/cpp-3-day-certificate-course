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
