//WAP to print the rectangular bounded pattern.
/*rows = 4
cols = 6
   ******
   *    *
   *    *
   ****** */
#include<iostream>
using namespace std;
int main(){
    int rows=0,cols=0;
    cout<<"Enter no of rows:"<<endl;
    cin>>rows;
    cout<<"Enter no of columbs : "<<endl;
    cin>>cols;
    if(rows<=0 || cols<=0){
        cout<<"Invalid input!!"<<endl;
        return 0;
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==0 || i==rows-1 || j==0 || j==cols-1){
                cout<<'*';

            }
            else cout<<' ';
        }cout<<endl;
    }
    return 0;
}