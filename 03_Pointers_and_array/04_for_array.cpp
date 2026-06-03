//WAP TO ENTER THE ROLL OF 10 STUDENTS
#include<iostream>
using namespace std;
int main(){
    int roll[100];
    int n;
    cout<<"enter the no of students:"<<endl;
    cin>>n;

    cout<<"Enter the rol no  of the students:"<<endl;
    for(int i=0;i<n;i++){
        cin>>roll[i];

    }cout<<endl;
    for(int i=0;i<n;i++){
        cout<<roll[i]<<endl; 
    }
    return 0;
}