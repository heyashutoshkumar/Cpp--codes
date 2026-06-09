//WAP to check whether the number is binary or not.
//WAP To check whether the number is strong or not.
#include<iostream>
using namespace std;


int main(){
    long long n;
    int bin=1;
    cout<<"Enter a binary number:"<<endl;
    cin>>n;
    if(n<0){
        n=-n;
    }
    while(n>0){
        int d=n%10;
        if(d!=1 && d!=0){  // or if(n>1)
            bin=0;
            break;
        }
        n/=10;
    }
    if(bin==1){
        cout<<"binary";
    }
    else{
        cout<<"not binary";}
    
    
    
    return 0;
}