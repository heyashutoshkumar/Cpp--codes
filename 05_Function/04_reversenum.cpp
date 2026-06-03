//WRITE A FUNCTION TO REVERSE THE NUMBER ENETRED BY THE USER
#include<iostream>
using namespace std;
void reverse(int a);
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    reverse(n);
    
    return 0;
}
void reverse (int a){
    int rev =0,d=0;
    while(a>0){
        d=a%10;
        rev=rev*10+d;
        a=a/10;
    }
    cout<<"The reversed number is:"<<rev;
}