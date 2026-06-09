//WAP to find the second largest element in an array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size=0;
    cout<<"Enter the number of elements:"<<endl;
    cin>>size;
    int array[size];
    if(size<=0){
        cout<<"Invalid input!!"<<endl; 
        return 0;       
    }
    cout<<"Enter elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int maxelement=array[0];
    for(int i=0;i<size;i++){
        if(array[i]>maxelement){
            maxelement=array[i];
        }
    }
    int temp=maxelement;
    maxelement=INT_MIN;
    for(int i=0;i<size;i++){
         
        if(array[i]>maxelement && array[i]!=temp){
            maxelement=array[i];
        }
    }if(maxelement==INT_MIN){
        cout<<"No second maximum element , all elements are same i.e "<<temp;
    }
    else cout<<"Second largest elements is:"<<maxelement;
    return 0;
}