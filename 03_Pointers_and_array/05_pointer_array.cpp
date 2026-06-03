#include<iostream>
using namespace std;
int main(){
    int marks[4];
    cout<<"enter the marks of students:"<<endl;
    for(int i =0;i<4;i++){
        cin>>marks[i];
    }
    int* p=marks;
    cout<<"Value at *p is:"<<(*p)<<endl;
    cout<<"Value at *(p+1) is:"<<*(p+1)<<endl;
    cout<<"Value at *(p+2) is:"<<*(p+2)<<endl;
    return 0;
}