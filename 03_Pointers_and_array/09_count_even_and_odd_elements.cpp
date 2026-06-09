//WAP to count the number of even and odd element in an array.
#include<iostream>
using namespace std;
int main(){
    int size=0,oddcount=0,evencount=0;
    cout<<"Enter number of element you want to store :"<<endl;
    cin>>size;
    int array[size];
    if(size<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }
    cout<<"Enter elements in an array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
        
    }
    for(int i=0;i<size;i++){
        if(array[i]%2==0){
            evencount++;
        }
        else{ 
            oddcount++;
        }
    }
    cout<<"Total even elements are : "<<evencount<<endl;
    cout<<"Total odd elements are : "<<oddcount;
    return 0;
}