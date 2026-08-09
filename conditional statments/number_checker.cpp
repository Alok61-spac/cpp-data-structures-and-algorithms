// find the number is negative or posetive or zero?
#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter Your Number:";
    cin>>number;
    if (number > 0){
        cout<<"Number is posetive.";
    }
    else if (number < 0){
        cout<<"Number is negative.";
    }
    else {
        cout<<"Number is  0.";
    }
    return 0;
}