// check number is prime or composite
#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter Your Number:";
    cin>>number;
    for(int count = 2;count<number;count++){
        if(number % count == 0){
            cout<<"Not a prime.";
            return 0;
        }
    else{
        cout<<"It is a prime number.";
        return 0;
    }
    }
    return 0;
}