//WAP to check whether the array is palidrome or not.
#include<iostream>
using namespace std;
int main(){
    int size=0;
    cout<<"Enter the size of an array:"<<endl;
    cin>>size;
    if(size<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }
    int ar[size];
    int start=0,end=size-1;
    bool flag=true;
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
    while(start<end){
        if(ar[start]==ar[end]){
            start++;
            end--;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag==true){
        cout<<"Palidrome array!!"<<endl;

    }
    else cout<<"Not Pallidrome!!"<<endl;

    return 0;
}