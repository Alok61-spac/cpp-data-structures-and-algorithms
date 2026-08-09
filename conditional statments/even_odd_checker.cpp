// find number is odd or even
#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter Your Number";
    cin>>number;
    cout<<(number % 2 == 0?"number is even":"number is odd");
    return 0;
}
