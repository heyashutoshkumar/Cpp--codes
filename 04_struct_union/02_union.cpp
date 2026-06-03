#include<iostream>
using namespace std;
union data{
    int roll;
    char grade;
};

int main(){
    union data d1;
    cout<<"Enter the roll of d1:"<<endl;
    cin>>d1.roll;
    cout<<"roll number of d1:"<<d1.roll<<endl;
    cout<<"enter the grade of d1:"<<endl;
    cin>>d1.grade;
    cout<<"grade of d1:"<<d1.grade<<endl;

    //cout<<"roll number of d1:"<<d1.roll<<endl; //--->This will give garbage value because grade value will overwrite the roll value memory is shared in union 
    
    return 0;
}