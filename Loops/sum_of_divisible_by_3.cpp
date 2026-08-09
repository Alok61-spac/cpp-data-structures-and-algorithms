//sum of all number 1 to n which are divisible by 3
#include <iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter number :";
    cin>>number;
    int sum = 0;
    int count =1;
    while(count<=number){
          if(count%3==0){
            sum += count;
          }
        count++;
    }
    cout<<"Total sum ="<<sum;
    return 0;
}