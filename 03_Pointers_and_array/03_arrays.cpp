//ARRAY: ARRAY is used to the the values at contigonous memory location.
#include<iostream>
using namespace std;
int main(){
    int marks[4]={90,92,94,96};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl<<endl;
    cout<<"Upgraded marks:"<<endl;


    //We can change the value of the array
    marks[3]=100;
    cout<<marks[3]<<endl;
    
    int maths[2];
    maths[0]=96;
    maths[1]=98;
    maths[2]=100;
    cout<<"maths marks:"<<maths[1]<<endl;
     return 0;
}