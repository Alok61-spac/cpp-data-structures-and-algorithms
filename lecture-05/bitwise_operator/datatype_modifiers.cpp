//determine the size of datatype modifiers.
#include <iostream>
using namespace std;

int main(){
    long int number;
    long long number1;
    short number2;
    signed int number3 = -168;
    unsigned number4 = 254;
    cout<<sizeof(number)<<endl<<sizeof(number1)<<endl<<sizeof(number2)<<endl<<sizeof(number3)<<endl<<sizeof(number4);
    return 0;
}