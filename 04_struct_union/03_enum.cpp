#include<iostream>
using namespace std;
enum codes{
    error =404,
    success = 100,
    fail =0
};
int main(){
    cout<<error<<endl;
    codes fault = error;
    cout<<fault<<endl;  
    cout<<success;
    return 0;
}