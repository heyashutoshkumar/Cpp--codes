//WAP to find the index of largest element in the array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size=0,maxindex=0,maxmarks=INT_MIN;
    cout<<"Enter the number of marks you want to store:"<<endl;
    cin>>size;
    int marks[size];
    if(size<=0){
        cout<<"Invalid size!!"<<endl;
        return 0;
    }
    cout<<"Enter the marks:"<<endl;
    for(int i=0;i<size;i++){
        cin>>marks[i];
        if(marks[i]>maxmarks){
            maxmarks=marks[i];
            maxindex=i;
        }
    }
    cout<<"Maximum marks index is:"<<maxindex<<endl;//FOR POSITOIN : maxindex+1

    
    return 0;
}