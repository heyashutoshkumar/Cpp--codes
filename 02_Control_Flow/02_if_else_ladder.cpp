#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter the age : \n";
    cin>>age;

    if((age<18)&&(age>0)){
        cout<<"You are not elligible to come to party!!"<<endl;
    }
    else if (age == 18){
        cout<<"You are elliglible for child pass!!"<<endl;

    }
    else if(age <= 0){
        cout<<"You are not born yet"<<endl;
    
    }
    else{
        cout<<"You are elligible!!";
    }
    return 0;
}