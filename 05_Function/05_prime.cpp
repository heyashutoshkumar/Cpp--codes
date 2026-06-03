//WRITE THE FUNCTION TO CHECK WHETHER THE NUMBER IS PRIME OR NOT:
#include<iostream>
using namespace std;
void isprime( int);
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    isprime(n);

    return 0;
}
void isprime(int n){
    int prime=1;
    for(int i=2;i<=(n/2);i++){
        if(n%i==0){
            prime= 0;
            
            break;
        }
        else{

            prime =1;
        }
    }
    if(prime==0){
        cout<<"Number is not prime!!"<<endl;
    }
    else{
        cout<<"Number is prime!!"<<endl;
    }
}