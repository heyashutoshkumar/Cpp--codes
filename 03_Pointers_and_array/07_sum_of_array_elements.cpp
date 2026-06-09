//WAP to find the sum of array elements.
#include<iostream>
using namespace std;
int main(){
    int size=0,summarks=0;
    cout<<"Enter the no of marks:"<<endl;
    cin>>size;
    if(size<=0){
        cout<<"Invalid input"<<endl;
        return 0;
    }
    int marks[size];
    cout<<"Enter marks of "<<size<<" students"<<endl;
    for(int i=0;i<size;i++){
        cin>>marks[i];
    }
    for(int i=0;i<size;i++){
        summarks=summarks+marks[i];
    }

    cout<<"Total marks stored :"<<summarks;
    return 0;
} 