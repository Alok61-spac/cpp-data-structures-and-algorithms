//typecasting small datatype into big.
#include <iostream>;
using namespace std;

int main(){
    int number = 61;
    double value = number;
    char alphabate='A';
    int asciivalue= alphabate;
    cout<<value<<"\n";
    cout<<asciivalue<<"\n";
//printing of size of variable
    cout<<sizeof(number)<<"\n";
    cout<<sizeof(value);
    return 0;
}