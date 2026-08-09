## Topic-Loops

### Definition of a Loop-



A loop is a control structure  that repeatedly executes a block of code as long as a specified condition is true. Loops help reduce repetitive coding and make programs more efficient.



#### 1\. for Loop

A for loop is used when the number of iterations is known in advance. It combines initialization, condition, and update in a single statement.



##### Syntax

for (initialization; condition; update) {

&#x20;   // code

}

###### Example-

\#include <iostream>

using namespace std;



int main() {

&#x20;   for (int i = 1; i <= 5; i++) {

&#x20;       cout << i << " ";

&#x20;   }

&#x20;   return 0;

}

Output

1 2 3 4 5

#### 2\. while Loop



A while loop executes a block of code as long as the given condition is true. The condition is checked before each iteration.



##### Syntax

while (condition) {

&#x20;   // code

}

###### Example

\#include <iostream>

using namespace std;



int main() {

&#x20;   int i = 1;

&#x20;   while (i <= 5) {

&#x20;       cout << i << " ";

&#x20;       i++;

&#x20;   }

&#x20;   return 0;

}

Output

1 2 3 4 5

#### 3\. do...while Loop



A do while loop executes the block of code at least once because the condition is checked after the loop body. 



##### Syntax

do {

&#x20;   // code

} while (condition);

###### Example-

\#include <iostream>

using namespace std;



int main() {

&#x20;   int i = 1;

&#x20;   do {

&#x20;       cout << i << " ";

&#x20;       i++;

&#x20;   } while (i <= 5);

&#x20;   return 0;

}

Output

1 2 3 4 5

Difference Between while and do...while

##### while Loop	                                do...while Loop

Condition is checked before execution.	                                 Condition is checked after execution.

May execute zero times if the condition is false.	                 Executes at least one time even if the condition is false.

Entry-controlled loop.	                                                      Exit-controlled loop.





