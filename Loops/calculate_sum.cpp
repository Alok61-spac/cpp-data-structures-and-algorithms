//sum of 1 to 100
#include <iostream>
using namespace std;

int main(){
    int count =1;
    int sum=0;
    while(count <= 100){
        sum += count;
        count++;
    }
    cout <<sum;
    return 0;
}