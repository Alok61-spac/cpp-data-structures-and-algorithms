//factorial of n numbers
#include <iostream>
using namespace std;

int main(){
    int number;
    cout <<"Enter the number :";
    cin>>number;
    int multi = 1;
    for(int count =1;count<=number;count++){
         multi *= count;

    }
    cout << multi;
    return 0;
}