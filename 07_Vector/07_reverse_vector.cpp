//WAP to reverse a vector.
#include<iostream>
#include<vector>
using namespace std;
void reverseVector( vector<int>& vec){
    int start=0,end=vec.size()-1;
    while(start<end){
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    
}
int main(){
    int size=0;
    cout<<"Enter the number of elements : "<<endl;
    cin>>size;
    if(size<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }
    vector <int> vec;
    cout<<"Enter vector elements:"<<endl;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    cout<<"Vector before reverse : "<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<' ';
    }
    cout<<"\nVector after reverse : "<<endl;
    reverseVector(vec);
    for(int i=0;i<vec.size();i++){
        cout<<vec.at(i)<<' ';
    }
    
    return 0;
}