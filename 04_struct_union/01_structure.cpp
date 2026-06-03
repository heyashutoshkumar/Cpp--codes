//STRUCTURE is a user-defined data type used to store the data of different type.
#include<iostream>
using namespace std;
struct stdudents{
    int roll;
    string name;
    float marks;
} typedef stu;
int main(){
    stu ashu;
    ashu.roll=1;
    ashu.marks=100;
    // cin.ignore();
    getline(cin,ashu.name);
    cout<<"roll no of ashu:"<<ashu.roll<<endl;
    cout<<"marks of ashu:"<<ashu.marks<<endl;
    cout<<ashu.name<<endl;
    stu ambar;
    ambar.roll=2;
    ambar.marks=90;
    cout<<"roll no of ambar:"<<ambar.roll<<endl;
    cout<<"marks of ambar:"<<ambar.marks<<endl;


    return 0;
}