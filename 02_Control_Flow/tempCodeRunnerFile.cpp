//WRITE A PROGRAM TO CHECK WHETHER THE CHARACTER IS IN UPPERCASE OR LOWERCASE
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character:"<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Character is in lowercase!!"<<endl;
    }
    else{
        cout<<"Character is in Uppercase!!"<<endl;
    }
    return 0;
}