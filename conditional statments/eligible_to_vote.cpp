//the persion is eligible for voting or not?
#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your Age:";
    cin>>age;
    cout<<(age >= 18?"You are eligible for voting.":"You are not eligible for voting.");

    return 0;
}