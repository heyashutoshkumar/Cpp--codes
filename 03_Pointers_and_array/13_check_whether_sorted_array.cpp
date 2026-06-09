//WAP to check whether the given array is sorted array or not.
#include<iostream>
using namespace std;
int main(){
    int size=0,sort=1;
    cout<<"Enter the no. of element :"<<endl;
    cin>>size;
    int ar[size];
    if(size<=1){
        cout<<"Can't check for 1 or less than 1 elements"<<endl;
        return 0;
    }
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
    for(int i=0;i<size;i++){
        if(i==size-1)
            break;
        if(ar[i]>ar[i+1]){
            sort=0;
            break;}
        /*else{
            sort=1;
            continue;} */
        
    }
    if(sort==1){
        cout<<"Sorted Array!!"<<endl;
    }
    else{
        cout<<"Not sorted array!!"<<endl;
    }
    return 0;
} 