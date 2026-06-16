//BASIC VECTOR FUNCTIONS
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    cout<<"Size of vec:"<<vec.size()<<endl;
    vec.push_back(42);
    vec.push_back(67);
    vec.push_back(1);
    cout<<"sSize of vec after push back:"<<vec.size()<<endl;
    vec.pop_back();
    cout<<"Size after pop back : "<<vec.size()<<endl;
    for(int value:vec){
        cout<<value<<endl;
    }
    cout<<"First element of vector is:"<<vec.front()<<endl;
    cout<<"Last element is:"<<vec.back()<<endl;
    cout<<vec.at(1);


    return 0;
}  