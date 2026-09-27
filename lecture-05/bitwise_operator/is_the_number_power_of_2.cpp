//figure out how to find if a number is power of 2 witout any loop.
#include <iostream>
using namespace std;

void power_of_2(int n){
    if(n > 0 && (n & (n - 1)) == 0){
        cout<<"number is power of 2.";
        return;
    }
    else{
        cout<<"number is not power of 2.";
        return;
    }
}
int main(){
    power_of_2(6);
    cout<<endl;
    power_of_2(8);
    return 0;
}