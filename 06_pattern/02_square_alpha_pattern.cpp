//WAP a program t print the pattern given below for any value of n.
/*for eg n=5
A B C D E 
A B C D E 
A B C D E 
A B C D E 
A B C D E */


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value n:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch=ch+1;
        }cout<<endl;
    }
    return 0;
}   