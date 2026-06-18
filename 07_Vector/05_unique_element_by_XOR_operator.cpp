//WAP to find the unique element in the given vector.given that only one unique element is there
#include<iostream>
#include<vector>
using namespace std;
int uniqueElement(const vector<int>& vec){
    int ans=0;
    for(int value:vec){
        ans^=value;
    }
    return ans;
}
int main(){
    vector<int> vec;
    int size;
    cout<<"Enter no of elements:"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        int element;
        cin>>element;
        vec.push_back(element);
    }
    cout<<"Unique element is:"<<uniqueElement(vec);
    return 0;
}