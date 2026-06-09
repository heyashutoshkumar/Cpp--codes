//WAP  for linear search in an array.
#include<iostream>
using namespace std;
int main(){
    int size=0,element=0;
    cout<<"Enter no. of data you want to store:"<<endl;
    cin>>size;
    int array[size];
    if(size<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }
    cout<<"Enter element to find in an array:"<<endl;
    cin>>element;
    
    cout<<"Enter array element:"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    for(int i=0;i<size;i++){
        if(array[i]==element){
            cout<<"Element found, at index:"<<i<<endl;
            return 0;
        }
    }
    
    cout<<"Element is not present is an array!!"<<endl;
    

    return 0;
}