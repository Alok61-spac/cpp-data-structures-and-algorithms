//Hollow diamond made up of star.
#include <iostream>
using namespace std;

int main(){
//top part
    for(int row=0;row<=5;row++){
    
        for(int space=5;space>=row+1;space--){
            cout<<" ";
        }
        cout<<"*";
        for(int space2=2;space2<=row*2;space2++){
            cout<<" ";
        }
        if(row!=0){
            cout<<"*";
        }
        cout<<endl;
    }
//bottom part
    for(int row2=0;row2<=4;row2++){
        for(int space3=1;space3<=row2+1;space3++){
            cout<<" ";
        }
        cout<<"*";
        for(int space4=7;space4>row2*2;space4--){
            cout<<" ";
        }
        if(row2<4){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}