#include<iostream>
using namespace std;
int sum (int a, int b){   // ---> this function is with return value 
    int c= a+b;
    return c;
}
void greet( void){
    cout<<"Namastiie!!"<<endl; //---> no return no arguement type function 
}

int main(){
    greet();
    int num1,num2;
    cout<<"Enter the value of num1:"<<endl;
    cin>> num1;
    cout<<"Enter the value of num2:"<<endl;
    cin>>num2;
    cout<<"The sum of num1 & num2 is:"<<sum(num1,num2);
    return 0;
}