/*COEFFICIENT OF nCr : n!/(r! * (n-r)! )*/
//WAP to find nCr binomial coefficient for n &r
#include<iostream>
using namespace std;
int fact(int n){
    int fac=1;
    for(int i=1;i<=n;i++){
        fac*=i;
    }return fac;
}

int nCr(int n,int r){
    //int fac_n=fact(n);
    //int fac_r=fact(r);
    //int facnr=fact(n-r);
    return fact( n)/(fact(r) * fact(n-r));
}
int main(){
    int n=0,r=0;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Enter the value of r:"<<endl;
    cin>>r;
    cout<<"Bionomial coefficient :"<<nCr(n,r);
    
    return 0;
}