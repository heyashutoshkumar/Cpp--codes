//Pointer and referencing are two different method in referencing two same variable of different name are there and pointer stores the address!!
#include<iostream>
using namespace std;
void swap(int* a,int *b);
int main(){
    int a,b;
    cout<<"enter the value of a and b:"<<endl;
    cin>>a>>b;
    cout<<"Before swap a:"<<a<<"and b:"<<b<<endl;
    swap(&a,&b);    
    return 0;
}
void swap( int* a, int*b){
    int temp = *a;
    *a=*b;
    *b=temp;
    cout<<"After swap a :"<<*a<<"and b:"<<*b<<endl; 

}