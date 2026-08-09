//sum of n number
#include <iostream>
using namespace std;

int main(){
    int number;
    int sum = 0;
    cout<<"Enter your how many number do you want to add:";
    cin>>number;
    for(int count=1;count<=number;count++){
          sum += count;
    }

    cout<<"sum ="<<sum;
    return 0;
}