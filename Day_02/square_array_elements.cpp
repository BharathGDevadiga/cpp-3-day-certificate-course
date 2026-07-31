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
