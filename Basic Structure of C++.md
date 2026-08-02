## Basic of C++

### 1.How a C++ Code Execution Process works?



i) Writing the Code –  writes the source code in a file with the .cpp extension.

ii) Preprocessing – The preprocessor handles directives such as #include. 

iii) Compilation – The compiler checks the code for errors and converts it into object code (machine-readable code(.exe file)).

&#x20;    it is done by executing (g++ filename.cpp).



iv) Execution – The operating system runs the executable file, and the program produces the output.



##### >> Flow of Execution



Source Code (.cpp)

↓

Preprocessor

↓

Compiler

↓

Executable File

↓

Program Output



### 2.#include, <iostream> and std.



##### >>what is #include?

&#x20; #include is preprocessor directive. #include tells the processor to include the contents  of header file before compilation.



##### >>What is <iostream>?

&#x20;<iostream> is a header file in C++ that provides input and output functionality.



###### It contains:

\* cout<< – Used to display output on the screen.

\* cin<< – Used to take input from the user.





#### >>What is std?



"std" stands for Standard Namespace.



&#x20;Most of the standard C++ library features, such as cout, cin, string, and endl, are inside the std namespace.



##### There are two common ways to use them:

i)

std::cout << "Hello";

std::cin >> x;



ii)

&#x20;using namespace std;

cout << "Hello";

cin >> x;





### 3\. Boilerplate Code in C++



\*Boilerplate code is the basic template or starting structure of a C++ program.



##### >>Boilerplate structure-



\#include <iostream>

using namespace std;



int main() {

&#x20;      code



&#x20;   return 0;

}



\* #include <iostream> – Includes the input/output library.

\* using namespace std; – Allows the use of standard library names without writing std:: every time.

\* int main() – The main function where program execution begins.

\* { } – Curly braces define the body of the function.

\* return 0; – Indicates that the program finished successfully.



