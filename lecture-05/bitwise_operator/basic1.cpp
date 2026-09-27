//use of bitwise operators
#include<iostream>
using namespace std;

int main(){
    int a = 6;
    int b = 10;
    //bitwise AND
    cout<<(a & b)<<endl;//2
    //bitwise OR
    cout<<(a | b)<<endl;//14
    //bitwise XOR(exclusive OR)
    cout<<(a ^ b);//12
    return 0;
}