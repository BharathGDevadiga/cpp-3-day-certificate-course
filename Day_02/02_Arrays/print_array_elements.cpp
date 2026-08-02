#include <iostream>
using namespace std;

int main() 
{
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size; i++)
      {
        cout << numbers[i] << " ";
    }

    cout << endl;
    return 0;
}

/*
Expected Output:
-----------------
10 20 30 40 50 
-----------------
*/
