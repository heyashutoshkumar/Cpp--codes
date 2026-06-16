//WAP to rotate an array to left by 1.
#include<iostream>
using namespace std;
int main(){
    int size=0,start=0;
    cout<<"Enter no. of element u want:"<<endl;
    cin>>size;
    int ar[size];
    cout<<"Enter array elemnts:"<<endl;
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
    int temp=ar[0];
    while(start<size){
        if(start==size-1){
            ar[start]=temp;
        }
        else{
            ar[start]=ar[start+1];
            
        }start++;
    }
    for(int i=0;i<=size-1;i++){
        cout<<ar[i]<<' ';
    }

    return 0;
}