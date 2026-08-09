//filled diamond pattern made up of star.
#include<iostream>
using namespace std;

int main(){
//top part
    for(int row=1;row<=6;row++){
        for(int space=row;space<=5;space++){
            cout<<' ';
        }
        for(int star=1;star<row*2;star++){
            cout<<'*'; 
        }
        cout<<endl;
    }
//bottom part
    for(int row2=1;row2<=5;row2++){
        for(int space2=1;space2<row2+1;space2++){
            cout<<' ';
        }
        for(int star2=11;star2>=row2*2;star2--){
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}