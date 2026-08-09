//find the character is lower or uppercase
#include <iostream>
using namespace std;
 int main(){
    char character;
    cout<<"Enter Your Character:";
    cin>>character;
    if ( character >= 'a' && character <= 'z'){
        cout <<"The Character Is Lowercase"<<endl;
    }
    else if(character >= 'A'&& character <= 'Z'){
        cout<<"The Character Is Uppercase"<<endl;
    }
    else{
        cout<<"The Character Is Not A Letter";
    }
    return 0;

 }