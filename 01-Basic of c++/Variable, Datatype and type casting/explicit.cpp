//typecasting of big datatype into small datatype.
#include <iostream>
using namespace std;
 int main(){
    double price=100.99;
    int new_price=int(price);
    char asciivalue=char(price);
    cout<<new_price<<endl<<asciivalue;
    return 0;
 } 