# Day 03 - C++ Practice

This folder contains intermediate C++ programs covering pointers, classes, Object-Oriented Programming (OOP) concepts, and the Standard Template Library (STL). The programs have been grouped into topics for easier navigation.

## Topics

1. **[Pointers](01_Pointers/)**
   - Memory addresses and pointer arithmetic
   - Pass-by-reference and pointer-to-pointer
2. **[Classes & Objects](02_Classes_and_Objects/)**
   - Class creation and constructors
   - Encapsulation using access modifiers
3. **[OOP Concepts](03_OOP_Concepts/)**
   - Inheritance and polymorphism (runtime & compile-time)
   - Abstract classes and virtual functions
4. **[Standard Template Library (STL)](04_STL/)**
   - Built-in data structures like `vector` and `set`

## Exploring the Code

Each subfolder contains the C++ source files for that topic along with a local `README.md` explaining the concepts and listing the programs. The expected output for each program is also included as a comment block at the bottom of the respective `.cpp` file!

## How to Compile and Run

Navigate into any topic folder and compile a program with `g++`:

```powershell
cd 01_Pointers
g++ pointer_basics.cpp -o pointer_basics
.\pointer_basics
```

## Requirements

- A C++ compiler such as `g++`
- C++11 or later
