//
#include<iostream>
using namespace std;

int main(){
    int number=4;
    int number2=8;
    //bitwise and(&)
    int ans=number & number2;
    //bitwise or(|)
    int ans2=number | number2;
    //bitwise xor(^)
    int ans3=number ^ number2;
    cout<<ans<<"\n"<<ans2<<endl<<ans3;
    return 0;
}