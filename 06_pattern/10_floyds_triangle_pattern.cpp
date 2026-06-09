//WAP to print given pattern.
/*for eg n=4 
1 
2 3 
4 5 6 
7 8 9 10 */
#include<iostream>
using namespace std;
int main(){
    int n,num1=1;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i;j>=0;j--){
            
            cout<<num1<<' ';
            num1++;

        }cout<<endl;
    }
    return 0;
}