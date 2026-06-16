#include<iostream>
#include<vector>   // Vector library used for using vector data structure
using namespace std;
int main(){
    vector <int> vec; // -->empty vector.
    vector <int> vect={1,2,3,4,5}; // --> vector of size 5 with elements
    vector <int> vecto(5,0); // --> Vector of name vect of size 5 with each value 0.
    cout<<vecto[0];
    
    return 0; 
}