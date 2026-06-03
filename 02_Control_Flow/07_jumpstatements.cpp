#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i < 10; i++)
    
    {
        cout<<i<<endl;
        if(i==7){
            break;    //--->Break the loop when match the conditions 
        }
    }
    
    return 0;
}
/*
     for (int i = 0; i < 10; i++)
    
    {
        cout<<i<<endl;
        if(i==7){
            continue;    //--->Skip that iteration and print other iteration value 
        }
    }*/