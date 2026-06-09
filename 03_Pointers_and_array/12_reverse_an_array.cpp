//WAP to reverse an array.
#include<iostream>
using namespace std;
void reverseArray(int ar[],int size){
    for(int i=0;i<size;i++){
        ar[i]=ar[size-i-1];

    }
}
int main(){
    int size=0;
    cout<<"Size of array:"<<endl;
    cin>>size;
    int ar[size];
    if(size<=0){
        cout<<"Not valid input";
        return 0;
    }
    cout<<"Enter array element:"<<endl;
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
    cout<<"Array elements before reversing:"<<endl;
    for(int i=0;i<size;i++){
        cout<<ar[i]<<' ';

    }
    reverseArray(ar, size);
    cout<<"\n Array after reverseing:"<<endl;
    for(int i=0;i<size;i++){
        cout<<ar[i]<<' ';
    }

    return 0;
}