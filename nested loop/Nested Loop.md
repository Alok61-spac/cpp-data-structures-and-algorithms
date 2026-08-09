## Topic-Nested Loop 

#### Definition-



A nested loop is a loop inside another loop. 



Syntax

for (initialization; condition; update) {      // Outer loop

&#x20;   for (initialization; condition; update) {  // Inner loop

&#x20;       // Statements

&#x20;   }

}



#### Outer Loop-

The outer loop controls the rows.

It executes one time for each row.



#### Inner Loop-

The inner loop controls the columns.

It executes completely for every iteration of the outer loop.



##### How It Works-



Suppose:



for (int i = 1; i <= 3; i++) {      // Rows

&#x20;   for (int j = 1; j <= 4; j++) {  // Columns

&#x20;       cout << "\* ";

&#x20;   }

&#x20;   cout << endl;

}

Execution

Row 1: Inner loop prints 4 stars.

Row 2: Inner loop prints 4 stars.

Row 3: Inner loop prints 4 stars.



Output:



\* \* \* \*

\* \* \* \*

\* \* \* \*

###### Example 1: Print Row and Column Numbers

\#include <iostream>

using namespace std;



int main() {

&#x20;   for (int i = 1; i <= 3; i++) {

&#x20;       for (int j = 1; j <= 4; j++) {

&#x20;           cout << "(" << i << "," << j << ") ";

&#x20;       }

&#x20;       cout << endl;

&#x20;   }

&#x20;   return 0;

}



Output



(1,1) (1,2) (1,3) (1,4)

(2,1) (2,2) (2,3) (2,4)

(3,1) (3,2) (3,3) (3,4)



##### Key Points-

A nested loop is a for loop inside another for loop.

The outer loop controls the rows.

The inner loop controls the columns.

For every one iteration of the outer loop, the inner loop executes completely.

##### Nested loops are mainly used for:

Printing star patterns

Printing number patterns

Working with rows and columns

Creating multiplication tables



