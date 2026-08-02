#include <iostream>
using namespace std;

int main() 
{
    cout << "Choose (1=Circle, 2=Rectangle, 3=Triangle): ";
    int choice;
    cin >> choice;

    switch (choice)
      {
        case 1: 
          {
            double r; cout << "Enter radius: "; cin >> r;
            cout << "Area = " << 3.14159 * r * r << endl;
            break;
        }
        case 2: 
          {
            double l, w; cout << "Enter length and width: "; cin >> l >> w;
            cout << "Area = " << l * w << endl;
            break;
        }
        case 3:
          {
            double b, h; cout << "Enter base and height: "; cin >> b >> h;
            cout << "Area = " << 0.5 * b * h << endl;
            break;
        }
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}

/*
Expected Output:
-----------------
Choose (1=Circle, 2=Rectangle, 3=Triangle): 1
Enter radius: 5
Area = 78.5397
-----------------
*/
