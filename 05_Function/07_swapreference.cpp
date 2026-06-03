#include<iostream>
using namespace std;
void swap(int &x , int &y);
int main(){
    int a,b;
    cout<<"enter the value of a and b:"<<endl;
    cin>>a>>b;
    cout<<"Before swap a:"<<a<<"and b:"<<b<<endl;
    swap(a,b);    
    return 0;
    
    return 0;
}
void swap(int& x, int& y){
    int temp=x;
    x=y;
    y=temp;
    cout<<"After swap a:"<<x<<" and b :"<<y;
}