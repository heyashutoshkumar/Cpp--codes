//WAF to convert the decimal to binary number system
#include<iostream>
using namespace std;
long long binar(int n){
    long long bin=0,rem=0,power=1;
    if(n==0){
        return 0;
    }
    while(n>0){
        rem=n%2;
        bin=bin+power*rem;
        power*=10;
        n/=2;
    }return bin;
}
int main(){
    int n;
    cout<<"Enter a decimal number:"<<endl;
    cin>>n;
    cout<<"Binary form:"<<binar(n);
    return 0;
}