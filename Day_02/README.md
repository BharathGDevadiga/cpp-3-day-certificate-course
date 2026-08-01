# Day 02 - C++ Practice

This folder contains beginner-friendly C++ programs covering functions, arrays, strings, and basic counting problems.

## Topics

- Functions and function calls
- Arrays
- Strings
- Character and word counting
- Even and odd numbers
- Recursion

## Programs

### Functions and Numbers

| File | Description |
| --- | --- |
| [area_of_circle.cpp](area_of_circle.cpp) | Calculates the area of a circle using a function. |
| [evenOrodd.cpp](evenOrodd.cpp) | Checks whether a number is even or odd using a function. |
| [function_call_demo.cpp](function_call_demo.cpp) | Demonstrates calling one function from another function. |
| [sum_using_function.cpp](sum_using_function.cpp) | Adds two numbers using a function. |

### Arrays

| File | Description |
| --- | --- |
| [count_even_odd.cpp](count_even_odd.cpp) | Counts the even and odd values in an array. |
| [largest_array_element.cpp](largest_array_element.cpp) | Finds the largest element in an array. |
| [print_array_elements.cpp](print_array_elements.cpp) | Prints the elements of a predefined array. |
| [read_print_array.cpp](read_print_array.cpp) | Reads array values from the user and prints them. |
| [square_array_elements.cpp](square_array_elements.cpp) | Prints the square of every array element. |
| [sum_array_elements.cpp](sum_array_elements.cpp) | Calculates the sum of all array elements. |

### Strings

| File | Description |
| --- | --- |
| [count_character_frequency.cpp](count_character_frequency.cpp) | Counts how many times a selected character appears in a string. |
| [count_vowels.cpp](count_vowels.cpp) | Counts the vowels in a string. |
| [count_words.cpp](count_words.cpp) | Counts words in a predefined sentence. |
| [count_words_getline.cpp](count_words_getline.cpp) | Reads a complete sentence and counts its words. |
| [frequency_of_every_character.cpp](frequency_of_every_character.cpp) | Displays the frequency of every character in a string. |
| [reverse_string.cpp](reverse_string.cpp) | Prints a string in reverse order. |
| [uppercase_string.cpp](uppercase_string.cpp) | Converts lowercase text to uppercase. |

### Recursion

| File | Description |
| --- | --- |
| [factorial_recursion.cpp](factorial_recursion.cpp) | Calculates factorial using recursion. |
| [power_recursion.cpp](power_recursion.cpp) | Calculates power using recursion. |
| [print_decreasing.cpp](print_decreasing.cpp) | Prints numbers in decreasing order using recursion. |
| [print_increasing.cpp](print_increasing.cpp) | Prints numbers in increasing order using recursion. |
| [print_increasing_decreasing.cpp](print_increasing_decreasing.cpp) | Prints numbers in both increasing and decreasing order using recursion. |
| [print_name_n_times.cpp](print_name_n_times.cpp) | Prints a name N times using recursion. |
| [reach_home.cpp](reach_home.cpp) | Demonstrates reaching a destination step by step using recursion. |
| [tower_of_hanoi.cpp](tower_of_hanoi.cpp) | Solves the Tower of Hanoi problem using recursion. |

## How to Compile and Run

Open a terminal in this folder and compile any program with `g++`:

```powershell
g++ area_of_circle.cpp -o area_of_circle
.\area_of_circle
```

Replace `area_of_circle` with the name of the program you want to run.

## Requirements

- A C++ compiler such as `g++`
- C++11 or later

## Programs with Output

### area_of_circle.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

float area (float radius)
{
    float result=3.14*radius*radius;
    return result;
}

int main()
{
    float radius;

    cout << "Enter radius: ";
    cin >> radius;
    float ans=area(radius);
    cout << "Area of circle: " << ans;
    return 0;
}
```

**Output:**
```
Enter radius: 5
Area of circle: 78.5
```

---

### count_character_frequency.cpp

**Code:**
```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	char ch;

	cout << "Enter a string: ";
	cin >> str;

	cout << "Enter a character: ";
	cin >> ch;

	int frequency = 0;
	for(int i=0; i<str.length(); i++)
  {
		if(str[i] == ch)
    {
			frequency++;
		}
	}

	cout << "Frequency: " << frequency;
	return 0;
}
```

**Output:**
```
Enter a string: hello
Enter a character: l
Frequency: 2
```

---

### count_even_odd.cpp

**Code:**
```cpp
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
```

**Output:**
```
Even numbers: 3
Odd numbers: 3
```

---

### count_vowels.cpp

**Code:**
```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "hello";

    int vowelCount = 0;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowelCount++;
        }
    }

    cout << "Number of vowels: " << vowelCount;
    return 0;
}
```

**Output:**
```
Number of vowels: 2
```

---

### count_words.cpp

**Code:**
```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence = "I am learning C++";
    int wordCount = 1;

    for(int i=0; i<sentence.length(); i++)
    {
        if(sentence[i] == ' '){
          
            wordCount++;
        }
    }

    cout << "Number of words: " << wordCount;
    return 0;
}
```

**Output:**
```
Number of words: 4
```

---

### count_words_getline.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    int words=1;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            words++;
        }
    }
    cout << "Number of words: " << words;
    return 0;
}
```

**Output:**
```
Enter a sentence: I love programming
Number of words: 3
```

---

### evenOrodd.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

bool isEvent(int num)
{
    if(num%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(isEvent(num))
    {
        cout << num << " is even." << endl;
    }
    else
    {
        cout << num << " is odd." << endl;
    }
    return 0;
}
```

**Output:**
```
Enter a number: 4
4 is even.
```

---

### factorial_recursion.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

int factorial(int number){
	if(number == 0 ){
		return 1;
	}

	return number * factorial(number - 1);
}

int main(){
	factorial(5);

	cout << "Factorial: " << factorial(5) << endl;
	return 0;
}
```

**Output:**
```
Factorial: 120
```

---

### frequency_of_every_character.cpp

**Code:**
```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int frequency[256] = {0};

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i=0; i<str.length(); i++)
    {
        frequency[(unsigned char)str[i]]++;
    }

    cout << "Character frequencies:" << endl;
    for(int i=0; i<256; i++)
    {
        if(frequency[i] > 0)
        {
            if(i == ' ')
            {
                cout << "space: " << frequency[i] << endl;
            }
            else
            {
                cout << char(i) << ": " << frequency[i] << endl;
            }
        }
    }

    return 0;
}
```

**Output:**
```
Enter a string: hello world
Character frequencies:
space: 1
d: 1
e: 1
h: 1
l: 3
o: 2
r: 1
w: 1
```

---

### function_call_demo.cpp

**Code:**
```cpp
#include <iostream>

using namespace std;

void bangalore()
{
    cout<<" IT Hub ";
}

void city()
{
    cout<<" Udupi ";
    bangalore();
}

int main()
{
    city();
    return 0;
}
```

**Output:**
```
 Udupi  IT Hub 
```

---

### largest_array_element.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

int main()
{     
    int n;                      
    cout << "Enter n: ";             
    cin>>n;                           
    int arr[n];                      
    cout << "Enter array values: ";  
     for(int i=0; i<n; i++){          
    cin>>arr[i];                     
    }                                

    int largest = arr[0];
    for(int i=1; i<n; i++)
    {
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    cout << "Largest array element: " << largest;
    return 0;
}
```

**Output:**
```
Enter n: 5
Enter array values: 10 45 23 78 12
Largest array element: 78
```

---

### power_recursion.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

int power(int base, int exponent){
	if(exponent == 0){
		return 1;
	}

	return base * power(base, exponent - 1);
}

int main(){
	int base = 2;
	int exponent = 5;

	cout << base << "^" << exponent << " = " << power(base, exponent);
	return 0;
}
```

**Output:**
```
2^5 = 32
```

---

### print_array_elements.cpp

**Code:**
```cpp
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
```

**Output:**
```
10 20 30 40 50 
```

---

### print_decreasing.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

void dec(int x)
{
	if(x == 0)
{
		return;
	}

	cout << x << endl;
	dec(x - 1);
}

int main()
{
	dec(5);
	return 0;
}
```

**Output:**
```
5
4
3
2
1
```

---

### print_increasing.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

void inc(int x)
{
	if(x == 0)
  {
		return;
	}

	inc(x - 1);
	cout << x << endl;
}

int main()
{
	inc(5);
	return 0;
}
```

**Output:**
```
1
2
3
4
5
```

---

### print_increasing_decreasing.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

void printMixed(int x)
{
	if(x == 0)
{
		return;
	}

	cout << x << " ";
	printMixed(x - 1);
	cout << x << " ";
}

int main()
{
	printMixed(5);
	return 0;
}
```

**Output:**
```
5 4 3 2 1 1 2 3 4 5 
```

---

### print_name_n_times.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

void printName(string name, int n)
 {
    if (n == 0) {
		return;
	}

    cout << name << endl;
    printName(name, n - 1);
}

int main() 
{
    string name;
    int n ;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter the number of times to print: ";
    cin >> n;

    printName(name, n);

    return 0;
}
```

**Output:**
```
Enter your name: Bharath
Enter the number of times to print: 3
Bharath
Bharath
Bharath
```

---

### reach_home.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

void reachHome(int src, int des)
{
	cout << src << " -> " << des << endl;
    
	if(src == des)
    {
		return;
	}

	reachHome(src + 1, des);
}

int main()
{
	reachHome(1, 10);

	return 0;
}
```

**Output:**
```
1 -> 10
2 -> 10
3 -> 10
4 -> 10
5 -> 10
6 -> 10
7 -> 10
8 -> 10
9 -> 10
10 -> 10
```

---

### read_print_array.cpp

**Code:**
```cpp
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
```

**Output:**
```
Enter n: 4
Enter array values: 10 20 30 40
Array elements: 10 20 30 40 
```

---

### reverse_string.cpp

**Code:**
```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "hello";

    cout << "Reversed string: ";
    for(int i=str.length()-1; i>=0; i--)
    {
        cout << str[i];
    }
    return 0;
}
```

**Output:**
```
Reversed string: olleh
```

---

### square_array_elements.cpp

**Code:**
```cpp
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
```

**Output:**
```
Enter n: 4
Enter array values: 2 3 4 5
Array elements: 4 9 16 25 
```

---

### sum_array_elements.cpp

**Code:**
```cpp
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
```

**Output:**
```
Enter n: 5
Enter array values: 10 20 30 40 50
Sum of array elements: 150
```

---

### sum_using_function.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

int add(int first, int second)
{
    return first + second;
}

int main() 
{
    int number1, number2;

    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    cout << "Sum: " << add(number1, number2);

    return 0;
}
```

**Output:**
```
Enter two numbers: 10 20
Sum: 30
```

---

### tower_of_hanoi.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char helper, char destination)
{
	if(n == 0)
  {
		return;
	}

	towerOfHanoi(n - 1, source, destination, helper);
	cout << "Move disk " << n << " from " << source<< " to " << destination << endl;
	towerOfHanoi(n - 1, helper, source, destination);
}

int main()
{
	towerOfHanoi(3, 'A', 'B', 'C');
	return 0;
}
```

**Output:**
```
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C
```

---

### uppercase_string.cpp

**Code:**
```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter lowercase text: ";
   cin>>str;

    for(int i=0; i<str.length(); i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
    }
    
    cout << "Uppercase text: " << str;
    return 0;
}
```

**Output:**
```
Enter lowercase text: hello
Uppercase text: HELLO
```

---
