//WAF to print the prime number in a given range.
#include<iostream>
using namespace std;
void prime(int st,int end){
    
    for(int i=st;i<=end;i++){
        if(i<=1)
            continue;
        bool prime=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                prime=false;
                break;
            }
        }if(prime){
            cout<<i<<' ';
        }
    }
}
int main(){
    int a,b;
    cout<<"Enter two numbers:"<<endl; 
    cin>>a>>b;
    prime(a,b);
    
    return 0;
}