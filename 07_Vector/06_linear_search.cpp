//WAP for linear search in a vector 
#include<iostream>
#include<vector>
using namespace std;
int linearSearch(const vector<int>& vec, int target){
    
    for(int i=0;i<vec.size();i++ ){
        if(vec[i]==target){
            
            return i;
            
        }
        
    }return -1;

}

int main(){
    int size=0,target=0;
    cout<<"Enter the number of element u wwant to store:"<<endl;
    cin>>size;
    
    if(size<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }    
    vector<int>vec;
    cout<<"Enter vector element:"<<endl;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }cout<<"Enter the element you want to search:"<<endl;
    cin>>target;
    int index=linearSearch(vec,target);
    if(index!=-1) cout<<"Element index :"<<index;
    else cout<<"Element not found"; 
    
    return 0;
}