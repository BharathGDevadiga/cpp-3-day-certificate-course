#include <iostream>
using namespace std;

int main() 
{
   int number;

   cout << "Enter a number: ";
   cin >> number;

   if (number < 0) 
   {
      cout << "The number is negative." << endl;
      cout << "Absolute value: " << -number << endl;
   }
   else if (number > 0) 
   {
      cout << "The number is positive." << endl;
      cout << "Absolute value: " << number << endl;
   }
   else {
      cout << "The number is zero." << endl;
      cout << "Absolute value: 0" << endl;
   }

   return 0;
}  

/*
Expected Output:
-----------------
Enter a number: -5
The number is negative.
Absolute value: 5
-----------------
*/
