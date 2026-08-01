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

/*
Expected Output:
-----------------
Enter n: 5
Enter array values: 10 20 30 40 50
Sum of array elements: 150
-----------------
*/
