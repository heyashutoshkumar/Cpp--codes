//WAP to find the average of all elements in an array.
#include<iostream>
using namespace std;
int main(){
    int size=0;
    double sum=0;
    cout<<"Enter no. of elements:"<<endl;
    cin>>size;
    double array[size];
    if(size<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    
    cout<<"Average of all elements are:"<<sum/size;
    return 0;
}