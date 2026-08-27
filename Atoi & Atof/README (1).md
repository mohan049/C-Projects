Implementation of My Own `atoi()` and `atof()` Functions
 Description :
This project implements custom versions of the standard C library functions `atoi()` and `atof()` without directly using the built-in conversion functions.
`my_atoi()` converts a string into an integer.
`my_atof()` converts a string into a floating-point number.
The project demonstrates how string characters can be processed and converted into numerical values using basic C programming concepts.
 Objectives :
Understand string-to-number conversion.
Implement `atoi()` functionality from scratch.
Implement `atof()` functionality from scratch.
Handle positive and negative numbers.
Handle decimal values in floating-point conversion.
Practice strings, loops, conditions, and arithmetic operations in C.
 Features :
Custom `atoi()`
Converts strings such as:
"1234"  → 1234
"-1234" → -1234
"+1234" → 1234
Custom `atof()`
Converts strings such as:
```text
"123.45"  → 123.45
"-123.45" → -123.45
"+123.45" → 123.45
```
 Concepts Used
C Strings
Character handling
ASCII values
Pointers
Loops
Conditional statements
Type conversion
Integer arithmetic
Floating-point arithmetic
Functions
Project Structure :
Implementation-of-atoi-and-atof/
├── atoi.c
├── atof.c
└── README.md
Compilation
Compile the program using GCC:
```bash
gcc  atoi.c atof.c -o ./a.out
```
Run:
```bash
./a.out
```
 Example
Input :

Enter integer string: -12345
Enter floating-point string: 123.456
Output :
Integer value: -12345
Float value: 123.456000
 Learning Outcome : This project helped me understand how standard library conversion functions such as `atoi()` and `atof()` work internally and improved my understanding of C strings, pointers, ASCII values, and numerical conversion logic.
