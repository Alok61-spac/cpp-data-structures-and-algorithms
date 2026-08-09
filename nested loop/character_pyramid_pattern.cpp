//pyramid made up of alphabate.
#include <iostream>
using namespace std;

int main(){
    for(char row='A';row<='F';row++){
        for(char space=row;space<='F';space++){
            cout<<' ';
        }
        for(char alphabate='A';alphabate<row+1;alphabate++){
            cout<<alphabate;
        }
        for(char alphabate2=row-1;alphabate2>='A';alphabate2--){
            cout<<alphabate2;
        }
        cout<<endl;
    }
    return 0;
}