//WAP to right rotate an array by 1.
#include<iostream>
using namespace std;
int main(){
    int size=5,temp=0;
    int a[5]={1,2,3,4,5};
    temp=a[size-1];
    for(int i=size-1;i>=1;i--){
       a[i]=a[i-1];

    }
    a[0]=temp;
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}