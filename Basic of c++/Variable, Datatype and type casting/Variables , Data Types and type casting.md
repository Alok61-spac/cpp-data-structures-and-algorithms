## 1\. Variables and Data Types

### Variable  definition-

\*A variable is a named memory location used to store data. Its value can change during program execution.

#### Example:

&#x20;age = 18;

&#x20;\*Must begin with a letter or underscore (\_).

&#x20;\*Cannot start with a number. salary= 25000.50;

&#x20;grade = 'A';



#### Rules for Naming Variables-



&#x20;\*Cannot contain spaces or special symbols (except \_).

&#x20;\*Keywords like int, float, if cannot be used as variable names.

&#x20;\*Variable names are case-sensitive (Age and age are different).



### Data Types in C++>>

###### Data Type    Description	              Example              space need to store

int	       Stores whole numbers	                    25                         4 Bytes

float	       Stores decimal numbers	                    12.5                       4 Bytes

double         Stores large decimal numbers	           123.456789                  8 Bytes

char	       Stores a single character	             'A'                       1 Bytes

bool	       Stores true or false	                     true                      1 Bytes

string	       Stores text	                           "Hello"                   1+1+1+1+1=5 Bytes



#### Example Program-



\#include <iostream>

using namespace std;



int main() {

&#x20;   int age = 18;

&#x20;   float height = 5.8;

&#x20;   char grade = 'A';



&#x20;   cout << age << endl;

&#x20;   cout << height << endl;

&#x20;   cout << grade << endl;



&#x20;   return 0;

}

output:

18

5.8

A



## 2\. Type Casting

### Definition-

\*Type casting is the process of converting one data type into another.



Types of Type Casting

#### 1\. Implicit Type Casting (Automatic)



The compiler automatically converts one data type into another.

##### Example:

int a = 10;

float b = a;

cout << b;

Output:

10

#### 2\. Explicit Type Casting (Manual)



\*The programmer converts the data type using the cast operator.



##### Example:

float x = 9.8;

int y = (int)x;

cout << y;

Output:

9



Another Example:

int a = 10;

int b = 3;



float result = (float)a / b;



cout << result;

Output:

3.33333



