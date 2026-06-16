//WAP to count the total positive,negativeand zero in array elements.

#include<iostream>
using namespace std;
int count(int ar[],int size){
    int positiveCount=0,negativeCount=0,zeroCount=0;
    for(int i=0;i<size;i++){
        if(ar[i]>0) positiveCount++;
        else if(ar[i]<0) negativeCount++;
        else zeroCount++;
    }
    return positiveCount,negativeCount,zeroCount;
    
}
int main(){
    int size=0,element;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    int ar[size];
    if(size<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }cout<<"Enter elements:";
    for(int i=0;i<size;i++){
        cin>>ar[i];
    }
    
    cout<<"Postive elements , negative elements and zero elements are respectfully as:"<<count(ar,size);
    
    return 0;
}