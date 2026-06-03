//Create a function to count digits in a number.
#include<iostream>
using namespace std;
void checkdigit(int );
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    checkdigit( n);
    return 0;
}
void checkdigit( int a){
    int count=0;
    while(a>0){
        count=count+1;
        a=a/10;
    }cout<<"Total digits in a number is:"<<count<<endl;
    cout<<"Thank You!!";
}