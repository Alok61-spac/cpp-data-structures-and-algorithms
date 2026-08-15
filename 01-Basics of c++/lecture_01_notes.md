# Basic concepts of C++
## 1. Steps of the c++ code execution process
i. **Writing the Code:** Write the source code in a file with the .cpp extension.<br>
ii.**Preprocessing:** The preprocessor handles directives such as #include.<br>
iii. **Compilation:** The compiler checks the code for errors and converts it into object code .<br>
This can be done by executing the command: g++ filename.cpp<br>
iv. **Execution:** The operating system runs the executable file, and the program produces the output.<br>
### Flow of Execution
Source Code (.cpp)<br>
↓<br>
Preprocessor<br>
↓<br>
Compiler<br>
↓<br>
Executable File<br>
↓<br>
Program Output
## 2.\#include, iostream and std.
### definition of #include:
\#include is preprocessor directive. It tells the processor to include the contents of header file before compilation.
### definition of iostream: 
iostream is a header file in C++ that provides input and output functionality.
### iostream functions:
\* cout<<: Used to display output on the screen.
\* cin>>: Used to take input from the user.
### definition of std:
"std" stands for standard namespace.
Most of the standard C++ library features such as **cout, cin, string, endl,etc** are inside the std namespace.
### There are two common ways to use them:
i.
std::cout << "Hello";<br>
std::cin >> x;<br>
ii.
using namespace std;<br>
cout << "Hello";<br>
cin >> x;<br>
### 3\. Boilerplate Code in C++
\*Boilerplate code is the basic template or starting structure of a C++ program.
### >>Boilerplate Structure-<br>
\#include <iostream><br>
using namespace std;<br>

int main() {<br>
code<br>
return 0;<br>
}<br>
\* #include <iostream> – Includes the input/output library.<br>
\* using namespace std; – Allows the use of standard library names without writing std:: every time.<br>
\* int main() – The main function where program execution begins.<br>
\* { } – Curly braces define the body of the function.<br>
\* return 0; – Indicates that the program finished successfully.<br>

---
# 1)Operators
**operator Definition:**
Operators are special symbols used to perform operations on variables and values.
## Types of Operators in C++
### 1\. Arithmetic Operators
**Definition:**
These operators perform basic mathematical calculations on numerical values.
| Operator  |   Meaning        |Example   |
| - | - | -|
|   +       | Addition         |   a + b |
|   -       | Subtraction      |   a - b |
|   *       | Multiplication   |   a * b |
|   /       | Division         | a / b   |
|   %       |Remainder         | a % b   |

**Example:**<br>
```cpp
#include <iostream>
using namespace std;
int main() {
 int a = 10, b = 3;
cout << "Addition: " << a + b << endl;
 cout << "Subtraction: " << a - b << endl;
cout << "Multiplication: " << a \* b << endl;
cout << "Division: " << a / b << endl;
cout << "Remainder: " << a % b << endl;
 return 0;
}
```
### 2\. Relational (Comparison) Operators
**Definition:**
These operators compare two values and return a Boolean value: true or false. When printed using cout, true and false are displayed as 1 and 0 by default.
|Operator    |Meaning         |
|---|---|
| ==        |Equal to        |
| !=        |Not equal to    |
| >          |Greater than    |
| <          |Less than       |
| >=         |Greater than or equal to  |
| <=         |Less than or equal to     |
**Example:**
int a = 10, b = 20;<br>
cout << (a < b);<br>
Output:<br>
1
### 3\. Logical Operators
**Definition:**
These operators combine or reverse conditions.
|Operator |name    |meaning|
|----|----|----|
|&&   |Logical AND| Both conditions must be true.|
| \|\|| Logical OR| At least one condition must be true.
|! Logical |NOT| Reverses true/false|
**Example:**
int a = 10, b = 20;<br>
cout << (a < b \&\& b > 15);<br>
Output:<br>
1
### 4\. Assignment Operators
**Definition:**
These operators assign values to variables.
|Operator| Example| Meaning|
|----|----|----|
| =  | a = 5        | Assign|
| += | a += 2       | Add and assign|
| -= | a -= 2       |Subtract and assign|
| *= | a *= 2       |Multiply and assign|
| /= | a /= 2       | Divide and assign|
| %= | a %= 2       |Modulus and assign|

**Example:**
int a = 10;<br>
a += 5;<br>
cout << a;<br>
Output:<br>
15
### 5\. Increment and Decrement (unary) Operators
**Definition:**
Increment and decrement operators are unary operators used to increase or decrease the value of a variable by 1.
| Operator| Meaning
|---|---
|++       |Increase by 1|
|--       |Decrease by 1|

**Example:**
int a = 5;<br>
a++;<br>
cout << a << endl;<br>
a--;<br>
cout << a;<br>
Output:<br>
6<br>
5
### 6.Bitwise Operators

---
## 1\. Variables and Data Types
**definition of variable:**<br>
A variable is a named memory location used to store data. Its value can change during program execution.
**Example:**<br>
age = 18;<br>
grade = 'A';
### Rules for Naming Variables-
-Cannot start with a number. salary= 25000.50;<br>
-Must begin with a letter or underscore (\_).<Br>
-Cannot contain spaces or special symbols (except \_).<br>
-Keywords like int, float, if cannot be used as variable names.<br>
-Variable names are case-sensitive (Age and age are different).<br>
### Data Types in C++>>
**Definition:**<br>
A data type specifies the type of data that a variable can store. It also determines how much memory is typically needed to store that data.
| Data Type| Description |Example| storage size|
|---|---|---|---|
|int |Stores whole numbers| 25| 4 Bytes|
|float |Stores decimal numbers |12.5 |4 Bytes|
|double| Stores decimal numbers with greater precision |123.456789 |8 Bytes|
|char |Stores a single character |'A' |1 Byte|
|bool |Stores true or false |true |1 Byte|

**Example Program-**
```cpp
#include <iostream>
using namespace std;
int main() {
 int age = 18;
 float height = 5.8f;
char grade = 'A';
 cout << age << endl;
 cout << height << endl;
cout << grade << endl;
return 0;
}
```
Output:<br>
18<br>
5.8<br>
A
## 2\. Type Casting
**Definition-**<br>
Type casting is the process of converting one data type into another.
Types of Type Casting-
### i\. Implicit Type Casting (Automatic)
-The compiler automatically converts one data type into another.
**Example:**<br>
int a = 10;<br>
float b = a;<br>
cout << b;<br>
Output:<br>
10
### ii\. Explicit Type Casting (Manual)
-The programmer converts the data type using the cast operator.
**Example:**<br>
float x = 9.8;<br>
int y = (int)x;<br>
cout << y;<br>
Output:<br>
9<br>
**Another Example:**<br>
int a = 10;<br>
int b = 3;<br>
float result = (float)a / b;<br>
cout << result;<br>
Output:<br>
3.33333
