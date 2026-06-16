//WAP to find the frequency of the given element in an array.
#include<iostream>
using namespace std;
void frequency(int ar[],int size,int element){
    int frequenc=0;
    for(int i=0;i<size;i++){
        if(ar[i]==element) frequenc++;
    }
    if(frequenc==0) cout<<"element is not present in array!!"<<endl;
    else cout<<"Frequency of "<<element<<" is : "<<frequenc;
}
int main(){
    int size=0,element;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;
    int ar[size];
    if(size<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }cout<<"Enter elements:"<<endl;
    for (int i=0;i<size;i++){
        cin>>ar[i];
    }
    cout<<"Enter the element,u want to find frequncy of:"<<endl;
    cin>>element;
    frequency(ar,size,element);
    
    return 0;
}