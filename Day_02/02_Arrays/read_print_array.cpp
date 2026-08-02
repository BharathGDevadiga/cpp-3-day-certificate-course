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
        cout<<arr[i]<<" ";
    }
    return 0;
}

/*
Expected Output:
-----------------
Enter n: 4
Enter array values: 10 20 30 40
Array elements: 10 20 30 40 
-----------------
*/
