//
#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;
    int b = 1;
    int answer = 1 << b;
    while(answer < number){
        b++;
        answer = 1 << b;
    }
    if(answer == number){
        cout<<"true";
        
    }
    else{
        cout<<"false";
    }

    return 0;
}