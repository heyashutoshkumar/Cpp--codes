//WRITE A PROGRAM TO CHECK WHETHER THE CHARACTER IS IN UPPERCASE OR LOWERCASE
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character:"<<endl;
    cin>>ch;
    if(ch>='a' && ch<='z'){
        cout<<"Character is in lowercase!!"<<endl;     // Here, the compiller implicitly covert the character into its ascii value 
    }
    else{
        cout<<"Character is in Uppercase!!"<<endl;
    }
    return 0;
}
/*OR by comparing it's ascii value
if(ch>=65 && ch<=90){
    cout<<"Character is in Uppercase!!"}
    else{
    cout<<"Character is in lowercase!!"}

*/