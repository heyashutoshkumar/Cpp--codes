#include<iostream>
using namespace std;

int main(){
    char op;
    int a ;
    int b;
    
    cout<<"Enter the operator:(+ ,- , * ,/)"<<endl;
    cin>>op;

    cout<<"Enter the value of a & b:"<<endl;
    cin>> a >> b ;

    switch(op){
        case '+':cout<<"Sum of a and b:"<<a+b<<endl;
                 break;
        case '*':cout<<"Product a and b:"<<a*b<<endl;
                 break;
        case '/':cout<<"division :"<<a/b<<endl;
                    break;
        case '-':cout<<"Difference:"<<a-b<<endl;
                    break;
        default:cout<<"Invalid operator!!"<<endl;
                    break;
    }

    return 0;
}