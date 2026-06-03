//Constant are used to fix the value of the variable. after making the variable constant , user wouldn't able to change the value of variable.

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int x=10;
    cout<<"The value x was:"<<x<<endl;
    x = 20;
    cout<<"The value of x:"<<x<<endl; 

    //Now making constant 
    const float pi=3.14;
    cout<<"Value of pi:"<<pi<<endl;

    // pi = 2.14; ---->> Here, it will show error that user cann't change the value of pi

    int a=10, b=20, c=123;
    cout<<"Value of a:"<<a<<endl;
    cout<<"Value of b:"<<b<<endl;
    cout<<"Value of c:"<<c<<endl;

    //by using setw --> used to align the value rightside!!
    cout<<"Value of a by using setw(4):"<<setw(4)<<a<<endl;
    cout<<"Value of b by using setw(4):"<<setw(4)<<b<<endl;
    cout<<"Value of c by using setw(4):"<<setw(4)<<c<<endl; 

    return 0;
} 