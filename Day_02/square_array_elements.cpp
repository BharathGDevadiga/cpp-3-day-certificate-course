#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin>>n;

    int arr[n];     

    cout << "Enter array values: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout << "Array elements: ";
     for(int i=0; i<n; i++)
     {
        cout << arr[i] * arr[i] << " ";
    }
    return 0;
}

/*
Expected Output:
-----------------
Enter n: 4
Enter array values: 2 3 4 5
Array elements: 4 9 16 25 
-----------------
*/
