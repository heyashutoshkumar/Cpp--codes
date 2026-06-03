// TYPE-CASTING  is the process of changing the data type of the variable by the user. It is also called as explicit type conversion.
#include<iostream>
using namespace std;

int main(){
    int a=10;
    float b=10.5f;
    cout<<"Value of a:"<<a<<endl;
    cout<<"Int part of int(b):"<<int(b)<<endl;
    cout<<"Int part of (int)b:"<<(int)b<<endl;
    cout<<"SUM of a + b:"<<a+b<<endl;
    cout<<"sum of a + int(b):"<<a+int(b)<<endl;
    cout<<"sum of a + (int)b:"<<a+(int)b<<endl;
    return 0;
}
