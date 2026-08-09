// floyds triangle by useing alphabet.
#include <iostream>
using namespace std;

int main(){
    char alphabat='A';
    for(int row=1;row<=6;row++){
        for(int column=0;column<row;column++){
            cout<<alphabat<<' ';
            alphabat++;
        }
        cout<<endl;
    }
    return 0;
}
