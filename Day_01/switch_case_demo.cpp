#include <iostream>
using namespace std;

int main() 
{
    int a=1;
    switch (a) 
    {
        case 1: 
          {
           cout<<"AC"<<endl;
           break;
        }
        case 2: 
          {
           cout<<"DC"<<endl;
           break;
        }
        case 3: 
          {
           cout<<"AC/DC"<<endl;
           break;
        }
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
