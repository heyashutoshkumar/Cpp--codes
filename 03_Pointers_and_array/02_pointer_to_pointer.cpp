/*POINTERS

Pointers are the user-defined data type which is used to stored the address of the another variable.

—>Two operators related to pointers are:

1. (Address of) operator (&)
2. Dereference operator(*) */

#include<iostream>
using namespace std;
int main(){
    int a=10;
    int* b;
    b=&a;
    //cout<<"Address of a:"<<&a<<endl;   //-----> & will give the address of a

    //cout<<"Address at b:"<<b<<endl;    // -----> b is the pointer which will give the address of the a.

    //cout<<"Value of a:"<<a<<endl;      // ------> a will simply give the value store at a

    //cout<<"Value of a by b:"<<*b<<endl<<endl;  // ----> * will give the value store at the address stored in the pointer b

    //cout<<"Address of b:"<<&b<<endl;    // ----> &b will give the address of b

    int** c;  // --> pointer to pointer {stores the address of another pointer}
    c=&b;
    cout<<"Adress of b:"<<&b<<endl;
    cout<<"Adress of b by c"<<c<<endl;
    cout<<"Value of c:"<<*c<<endl;
    cout<<"value at adress of(value at adrees of (b)):"<<**c<<endl;
    

     return 0;
}