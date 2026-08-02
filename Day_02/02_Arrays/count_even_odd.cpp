#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    int evenCount = 0;
    int oddCount = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else{
            oddCount++;
        }
    }

    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount;
    return 0;
}

/*
Expected Output:
-----------------
Even numbers: 3
Odd numbers: 3
-----------------
*/
