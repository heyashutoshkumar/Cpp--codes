//WAP to print a given pattern for any value of n.
/*for eg n=4
A 
B B 
C C C 
D D D D */

#include<iostream>
using namespace std;
int main(){
    int n;
    char ch='A';
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ch<<' ';
        }ch++;
        cout<<endl;
    }
    return 0;
}