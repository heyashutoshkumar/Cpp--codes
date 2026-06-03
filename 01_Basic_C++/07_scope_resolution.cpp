//SCOPE RESOLuTION OPERATOR is used when the user want to use the global variable value inside the function body when the local variable of same same is present.
#include<iostream>
using namespace std;
int c=45;

 int main(){
    int a;
    int b;
    int c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;

    cout<<"Enter the value of b:"<<endl;
    cin>>b;

    c=a+b;
    cout<<"Sum of a and b is:"<<c<<endl;
    cout<<"Global c:"<< (:: c)<<endl;
    return 0;
    
 } 