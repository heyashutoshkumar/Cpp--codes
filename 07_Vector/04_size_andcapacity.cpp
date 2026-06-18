//WAP to find the size and capacity of a vector 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec;
    vec.push_back(1);
    vec.push_back(4);
    cout<<"Size after pushing 2 elements :"<<vec.size()<<endl;
    cout<<"Capacity after pushing 2 elements:"<<vec.capacity()<<endl;
    vec.push_back(5);
    cout<<"Size after pushing 3 elements :"<<vec.size()<<endl; // Size after pushing 3 elements :3
    cout<<"Capacity after pushing 3 elements:"<<vec.capacity()<<endl; //Capacity after pushing 3 elements:4
    return 0;
}