//WAP to move all the zeros present in array at the end of an array.
#include<iostream>
using namespace std;
int main(){
    int size=0,zeroindex=0,count=0;
    cout<<"Enter size of an array:"<<endl;
    cin>>size;
    if(size<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    for(int i=0;i<=size-1;i++){
        if(a[i]==0){
            zeroindex=i;
            continue;
        }
        else{
            a[zeroindex]=a[i];
            count++;
            
        }
        
    }
    for(int i=count;i<=size-1;i++){
        a[i]=0;
    }for(int i=0;i<=size-1;i++){
        cout<<a[i]<<' '; 
    }

    return 0; 
}     