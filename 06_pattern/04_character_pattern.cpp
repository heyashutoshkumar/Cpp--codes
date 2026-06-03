//WAP to print a given pattern provided below for any value of n.
/*for eg n=3
A B C 
D E F 
G H I */
#include<iostream>
using namespace std;
int main(){
    int n;
    char ch='A';
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ch<<' ';
            ch++;
        }cout<<endl;
    }

    cout<<"After pattern ch:"<<ch<<endl; //'J'
    return 0;
}