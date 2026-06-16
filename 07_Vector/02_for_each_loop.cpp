//WAP to print each element of a vector 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vecto={1,2,3,4,5,6};
    cout<<"Size of vector:"<<vecto.size()<<endl ;
    for(int value:vecto){
        cout<<value<<endl;
    }
    
    return 0;
}