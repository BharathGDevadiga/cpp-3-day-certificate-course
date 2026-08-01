# Day 01 - C++ Practice

This folder contains beginner-friendly C++ programs covering input and output, operators, conditional statements, loops, arithmetic, and `switch` statements.

## Topics

- Basic input and output
- Comparison and bitwise shift operators
- `if`, `else if`, and nested conditions
- `switch` statements
- `while` and `for` loops
- Arithmetic calculations

## Programs

### Input and Basic Calculations

| File | Description |
| --- | --- |
| [student_introduction.cpp](student_introduction.cpp) | Reads a student's name, age, and branch, then displays the details. |
| [sum_1_to_10.cpp](sum_1_to_10.cpp) | Calculates the sum of the numbers from 1 to 10. |
| [product_1_to_10.cpp](product_1_to_10.cpp) | Calculates the product of the numbers from 1 to 10. |
| [calculate_shape_area.cpp](calculate_shape_area.cpp) | Calculates the area of a circle, rectangle, or triangle using a `switch` statement. |

### Operators

| File | Description |
| --- | --- |
| [comparison_operators.cpp](comparison_operators.cpp) | Demonstrates comparison operators using two integers. |
| [bitwise_shift_operators.cpp](bitwise_shift_operators.cpp) | Demonstrates left-shift and right-shift bitwise operators. |

### Conditional Statements

| File | Description |
| --- | --- |
| [negative_number.cpp](negative_number.cpp) | Checks whether a number is negative, positive, or zero and displays its absolute value. |
| [number_sign_and_absolute_value.cpp](number_sign_and_absolute_value.cpp) | Performs the same sign and absolute-value check as `negative_number.cpp`. |
| [nested_if_else.cpp](nested_if_else.cpp) | Demonstrates nested `if-else` statements and the dangling-`else` behavior. |
| [switch_case_demo.cpp](switch_case_demo.cpp) | Demonstrates selecting an output using a `switch` statement. |

### Loops

| File | Description |
| --- | --- |
| [while_loop_odd_even.cpp](while_loop_odd_even.cpp) | Uses a `while` loop to print values and identify odd and even numbers. |

## How to Compile and Run

Open a terminal in this folder and compile any program with `g++`:

```powershell
g++ sum_1_to_10.cpp -o sum_1_to_10
.\sum_1_to_10
```

Replace `sum_1_to_10` with the name of the program you want to run.

## Requirements

- A C++ compiler such as `g++`
- C++11 or later

## Programs with Output

### bitwise_shift_operators.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

int main() 
{
    unsigned int x = 8; // binary: 0000 1000

    unsigned int leftShift = x << 1;  // 0001 0000 = 16
    unsigned int rightShift = x >> 1; // 0000 0100 = 4

    cout << "x = " << x << endl;
    cout << "x << 1 = " << leftShift << endl;
    cout << "x >> 1 = " << rightShift << endl;

    return 0;
}
```

**Output:**
```
x = 8
x << 1 = 16
x >> 1 = 4
```

---

### calculate_shape_area.cpp

**Code:**
```cpp
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
```

**Output:**
```
Choose (1=Circle, 2=Rectangle, 3=Triangle): 1
Enter radius: 5
Area = 78.53975
```

---

### comparison_operators.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;
int main() 
{
   int a = 8;
   int b = 5;

   cout << boolalpha;
   cout << "a > b: " << (a > b) << endl;
   cout << "a < b: " << (a < b) << endl;
   cout << "a <= b: " << (a <= b) << endl;
   cout << "a >= b: " << (a >= b) << endl;
   cout << "a == b: " << (a == b) << endl;
   cout << "a != b: " << (a != b) << endl;
   cout << a << endl;
   
   return 0;
}  
```

**Output:**
```
a > b: true
a < b: false
a <= b: false
a >= b: true
a == b: false
a != b: true
8
```

---

### nested_if_else.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

int main() 
{
  int x=3;
  int y=10;
  if(x>2)
    if(y<15)
      x+=5;
      if(x<10)
        y-=3;
      else
        x=y;
      if(y>5)
        if(x<8)
          x=20;
        else
          y=2;
  cout << "x = " << x << ", y = " << y << endl;
}
```

**Output:**
```
x = 8, y = 2
```

---

### number_sign_and_absolute_value.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

int main() 
{
   int number;

   cout << "Enter a number: ";
   cin >> number;

   if (number < 0) 
   {
      cout << "The number is negative." << endl;
      cout << "Absolute value: " << -number << endl;
   }
   else if (number > 0) 
   {
      cout << "The number is positive." << endl;
      cout << "Absolute value: " << number << endl;
   }
   else {
      cout << "The number is zero." << endl;
      cout << "Absolute value: 0" << endl;
   }

   return 0;
}  
```

**Output:**
```
Enter a number: -5
The number is negative.
Absolute value: 5
```

---

### product_1_to_10.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

int main()
{
    int product = 1;

    for (int i = 1; i <= 10; i++) 
    {
        product *= i;
    }

    cout << "Product = " << product << endl;
    return 0;
}
```

**Output:**
```
Product = 3628800
```

---

### student_introduction.cpp

**Code:**
```cpp
#include <iostream>
#include <string>

using namespace std;
int main() 
{
    cout << "Enter your name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!\n";

    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout << "You are " << age << " years old.\n";

    cout << "Enter your branch: ";
    string branch;
    cin >> branch;
    cout << "You are in the " << branch << " branch.\n";

    return 0;
}  
```

**Output:**
```
Enter your name: Alice
Hello, Alice!
Enter your age: 20
You are 20 years old.
Enter your branch: CS
You are in the CS branch.
```

---

### sum_1_to_10.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

int main() 
{
    int sum = 0;

    for (int i = 1; i <= 10; i++) 
    {
        sum += i;
    }

    cout << "Sum = " << sum << endl;
    return 0;
}
```

**Output:**
```
Sum = 55
```

---

### switch_case_demo.cpp

**Code:**
```cpp
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
```

**Output:**
```
AC
```

---

### while_loop_odd_even.cpp

**Code:**
```cpp
#include <iostream>
using namespace std;

int main() 
{
    int i=0;
    while(i<4)
    {
    i=i+1;
    if(i%2!=0)
      cout<<"vjit"<<endl;
    else
      cout<<i<<endl;
    }
}  
```

**Output:**
```
vjit
2
vjit
4
```

---
