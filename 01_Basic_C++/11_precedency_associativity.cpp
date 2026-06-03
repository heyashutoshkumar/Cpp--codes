//Used to tell which operators should be executed first 
//PRECEDENCY : It is used to tel which operator should be executed first.
//ASSOCIATIVITY: It is used to tell which operation should be executed first , if the given operators are of same precendency 

#include<iostream>
using namespace std;

int main(){
    int a=1;
    int b=2;
    int c;
    c=((a*b)+b)-2;  // 2*1 --> 2+b --> 4-2 == 2
    cout<<c;
    return 0;
}