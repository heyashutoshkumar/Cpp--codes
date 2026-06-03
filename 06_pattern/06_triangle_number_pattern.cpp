//WAP to print a given pattern given below for any value of n.
/*for eg n=4
1 
2 2 
3 3 3 
4 4 4 4 
*/

#include<iostream>
using namespace std;
int main(){
    int n,num=1;
    cout<<"Enter the value of n:"<<endl;  
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<' ';       // ---> or cout<<i+1<<' ';

        }cout<<endl;
        num++;
    }
    cout<<"After the pattern , num="<<num;
    return 0;
}