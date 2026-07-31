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

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }

    cout << "Sum of array elements: " << sum;
    return 0;
}
