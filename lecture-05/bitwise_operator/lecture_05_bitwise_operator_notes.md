## Bitwise Operators

Bitwise operator are operators in C++ that perform operation directly on the **<u>individual bit (0 and 1) of an integer</u>**.

## Main Bitwise Operators

### 1.Bitwise AND(&)

#### Truth/rule table

```
  0 & 0 = 0<br>
  0 & 1 = 0<br>
  1 & 0 = 0<br>
  1 & 1 = 1<br>
  ```

#### Example

  ```cpp
  #include<iostream>
  using namespace std;

  int main(){
    int A = 5,B = 6;
    cout<<(A & B);
    return 0;
  }
  ```

  **output:4**

### 2.Bitwise OR(|)

#### Truth or rule table

 ```
  0 | 0 = 0<br>
  0 | 1 = 1<br>
  1 | 0 = 1<br>
  1 | 1 = 1<br>
  ```

#### Example

  ```cpp
  #include <iostream>
  using namespace std;

  int main(){
    int A = 5,B = 6;
    cout<<(A | B);
    return 0;
  }
  ```

  **output:7**

### 3.Bitwise XOR/exclusive OR(^)

#### Truth/rule table

  ```
   0 ^ 0 = 0<br>
   1 ^ 1 = 0<br>
   0 ^ 1 = 1<br>
   1 ^ 0 = 1<br>
   ```

#### Example

   ```cpp
   #include <iostream>
   using namespace std;

   int main(){
    int A = 5,B = 6;
    cout<<(A ^ B);
    return 0;
   }
   ```

   **output:3**

### 4.Bitwise NOT(~)

   Reverse every bit.<br>
   **. 0 becomes 1**<br>
   **. 1 becomes 0**<br>

#### Example

   ```cpp
   #include<iostream>
   using namespace std;

   int main(){
    int B = 6;
    cout<<(~B);
    return 0
   }
   ```

   **output:-7**

### 5.Bitwise LEFT SHIFT(<<)

The left shift operator moves all bits to the left by a specified number of positions.<br>
number << n<br>
means: shift the bits of number n positions to the left.<br>

#### Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int A = 5;

    cout << (A << 1);

    return 0;
}
```

#### Expalnation

Binary representation of 5<br>
5 = 00000101<br>
After shifting left by 1<br>
00000101 << 1 <br>
00001010 <br>
00001010 = 10 <br>

**Output:**
10<br>
**<u>Important Rule</u>**<br>
For positive integers:<br>
A << 1  → A × 2<br>
A << 2  → A × 4<br>
A << 3  → A × 8<br>
**for example**<br>
5 << 1 = 10<br>
5 << 2 = 20<br>
5 << 3 = 40<br>

### 6. Bitwise RIGHT SHIFT(>>)

The right shift operator moves all bits to the right by a specified number of positions.<br>
number >> n<br>
means: shift the bits of number n positions to the right.<br>

```cpp
Example
#include <iostream>
using namespace std;

int main() {
    int A = 20;
    cout << (A >> 2);
    return 0;
}
```

Binary representation:<br>
20 = 00010100<br>
Shift right by 2<br>
00010100 >> 2<br>
00000101<br>
00000101 = 5<br>
**Output:**
5<br>
**<u>Important Rule</u>**<br>
For positive integers<br>
A >> 1  → A / 2<br>
A >> 2  → A / 4<br>
A >> 3  → A / 8<br>
**For example**
20 >> 1 = 10<br>
20 >> 2 = 5<br>
20 >> 3 = 2<br>
The division is integer division, so fractional parts are discarded.<br>
7 >> 1<br>
means approximately<br>
7 / 2 = 3.5<br>
but the integer result is<br>
3<br>

## Global Scope and Local Scope in C++

Scope means the area of a program where a variable, function, or other name can be accessed.

### 1. Global Scope

A variable declared outside all functions has global scope.<br>
It can generally be accessed by different functions in the same program.<br>

#### Example

```cpp
#include <iostream>
using namespace std;

int number = 10;   // Global variable

int main() {
    cout << number;

    return 0;
}
```

**Output:**
10<br>

### 2. Local Scope

A variable declared inside a function or block { } has local scope.<br>
It can only be accessed within that particular scope.<br>

#### Example

```cpp
#include <iostream>
using namespace std;

int main() {

    int number = 10;   // Local variable

    cout << number;

    return 0;
}
```

**Output:**
10

## Operator precedence

Operator precedence determines which operator is evaluated first when an expression contains multiple operators.
![alt text|](operator_precedence-1.jpg)

## Data Type Modifiers

**Data type modifiers** are keywords in C++ that modify the **size, range, or sign** of a basic data type.<br>
The main data type modifiers are<br>

* `short`
* `long`
* `long long`
* `signed`
* `unsigned`

---

### 1. `short`

The `short` modifier is used to represent an integer that generally requires less storage than a regular `int`.

#### Syntax

```cpp
short int number = 100;
```

---

### 2. `long`

The `long` modifier is used when a larger integer range may be required.

#### Syntax

```cpp
long int number = 1000000;
```

---

### 3. `long long`

The `long long` modifier is used to store **very large whole numbers**.

It is guaranteed to provide at least **64 bits** of storage.

#### Syntax

```cpp
long long number = 1000000000000LL;
```

#### Example

```cpp
#include <iostream>
using namespace std;

int main() {

    long long population = 8000000000LL;

    cout << population;

    return 0;
}
```

**Output:**

```text
8000000000
```

`long long` is commonly used in DSA when calculations can exceed the range of `int`.

---

### 4. `signed`

The `signed` modifier allows a type to store **both negative and positive values**.

```cpp
signed int number = -100;
```

For `int`, `signed` is normally the default.

Therefore:

```cpp
int number = -100;
```

and

```cpp
signed int number = -100;
```

are equivalent.

---

### 5. `unsigned`

The `unsigned` modifier allows an integer type to store **zero and positive values**, but not negative values.

Because it does not need to represent negative numbers, it can provide a larger positive range for the same number of bits.

#### Example

```cpp
#include <iostream>
using namespace std;

int main() {

    unsigned int age = 20;

    cout << age;

    return 0;
}
```

**Output:**

```text
20
```

An unsigned integer should not be used when negative values are required.

---

## Combining Data Type Modifiers

Some modifiers can be combined.

### Examples

```cpp
short int a = 10;

long int b = 1000000;

long long int c = 1000000000000LL;

signed int d = -50;

unsigned int e = 50;
```

You can also omit `int` in some cases:

```cpp
short a = 10;

long b = 1000000;

long long c = 1000000000000LL;

unsigned e = 50;
```

---

## Comparison

| Data Type   | Main Use                             |
| ----------- | ------------------------------------ |
| `short`     | Smaller integer range                |
| `int`       | Normal integer values                |
| `long`      | Larger integer range where supported |
| `long long` | Very large integer values            |
| `signed`    | Negative and positive values         |
| `unsigned`  | Zero and positive values             |

---

## Important Examples

```cpp
int a = -100;
unsigned int b = 100;
long c = 1000000;
long long d = 1000000000000LL;
```

### Checking Size

You can use `sizeof()` to check how much memory a type uses on your system.

```cpp
#include <iostream>
using namespace std;

int main() {

    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;

    return 0;
}
```

**output:**<br>
2<br>
4<br>
4<br>
8<brS>

The result is measured in **bytes**.

> **Note:** The exact size of some integer types, especially `long`, depends on the platform and compiler. `long long` is guaranteed to be at least 64 bits.

---
**Remember:**

* `short` → generally smaller integer type
* `long` → larger integer type depending on platform
* `long long` → very large integer type
* `signed` → negative + positive
* `unsigned` → zero + positive
