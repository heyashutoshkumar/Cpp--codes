//Function prototype is used to tell the compiller that there is a function and may be deifned below.
//Prototype assures the compilller that the function would be used and may be defined below.

#include<iostream>
using namespace std;
int square(int a);   //Function prototype!!
//int square(int); //-->valid way for writing the prototype!!
void greet(void){
    cout<<"Namastiee!!"<<endl;
}
int main(){
    greet();
    int n;
    cout<<"Enter the number to be squared:\n";
    cin>>n;
    cout<<"Square of the number is:"<<square(n);  // ----> n is the actual parameter
    
    return 0;
}

int square(int a){ // ----> Here, a is the formal parameter!!
    return a*a;

}