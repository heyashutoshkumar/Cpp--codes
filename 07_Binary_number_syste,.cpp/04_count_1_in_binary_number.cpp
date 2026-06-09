//WAP to count 1's in a binary number 
#include<iostream>
using namespace std;
int main(){
    long long n;
    int count =0;
    bool bin=true;
    cout<<"enter a binary number:"<<endl;
    cin>>n;
    while(n>0){
        int d=n%10;
        if(d>1){
            cout<<"Not binary number!!";
            bin=false;
            return 0;
            
        }
        if(d==0){
            count++;
        }
        n/=10;
        if(n==0) count++;
    }if(bin==true)cout<<"Total 1 in binary number :"<<count;
    return 0;
}