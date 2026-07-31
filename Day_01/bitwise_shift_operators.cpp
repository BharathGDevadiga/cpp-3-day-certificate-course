#include <iostream>
using namespace std;

int main() 
{
    unsigned int x = 8; // binary: 0000 1000

    unsigned int leftShift = x << 1;  // 0001 0000 = 16
    unsigned int rightShift = x >> 1; // 0000 0100 = 4

    cout << "x = " << x << endl;
    cout << "x << 1 = " << leftShift << endl;
    cout << "x >> 1 = " << rightShift << endl;

    return 0;
}
