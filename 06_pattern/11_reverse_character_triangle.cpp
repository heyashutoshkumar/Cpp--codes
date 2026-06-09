#include<iostream>
using namespace std;
int main(){
    int n ,max=0,d=0;
    cin>>n;
    while(n>0){
        d=n%10;
        if(d>max){
            max=d;
        }
        n/=10;
    }
    cout<<"Largest digit is:"<<max;
    return 0;
}