#include <iostream>
using namespace std;
int main() 
{
   int a = 8;
   int b = 5;

   cout << boolalpha;
   cout << "a > b: " << (a > b) << endl;
   cout << "a < b: " << (a < b) << endl;
   cout << "a <= b: " << (a <= b) << endl;
   cout << "a >= b: " << (a >= b) << endl;
   cout << "a == b: " << (a == b) << endl;
   cout << "a != b: " << (a != b) << endl;
   cout << a << endl;
   
   return 0;
}  

/*
Expected Output:
-----------------
a > b: true
a < b: false
a <= b: false
a >= b: true
a == b: false
a != b: true
8
-----------------
*/
