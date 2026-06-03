//TERNARY OPERATOR IS USED TO CHECK THE GIVEN CONDITION AND ON THE BASIS OF THAT IT WILL EXECUTE THE GIVEN STATEMENTS
//WRITE A PROGRAM TO CHECK WHETHER THE NUMBER IS POSITIVE OF NEGATIVE BY USING TERNANRY OPERATOR
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    cout<<(n>=0 ? "Positive number":"Negative number");
    return 0;
}