//C++ has different types of operators . Here , we use Arthemetic operators 
#include<iostream>
using namespace std;

int main(){
    //Assingment Operators are used to assign the values to the variables
    int a = 10;   //----> '=' is the asssignment operators 
    int b = 2;
    // Arthemetic operators are used to perform the mathematical operations such as( + , - , * , / , % , etc)
    cout<< "Sum of a & b is:" << a+b<<endl;
    cout<< "Difference of a & b is:"<<a-b<<endl;
    cout<< "Product of a & b is:"<<a*b<<endl;
    cout<< "Division of a & b is:"<<a/b<<endl;
    cout<< "remainder of a & b is:"<<a%b<<endl;
    cout<< "Postfix operation on a++ is:"<<a++<<endl;
    cout<< "Postfix operation on a-- is:"<<a--<<endl;
    cout<< "Prefix operation on ++a is:"<<++a<<endl;
    cout<< "Prefix operation on --a is:"<<--a<<endl;  
    cout<<"\n";

    //Comparision operator are used for compariong purposes. Some comparision operators are (== , < , > , <= , >= , etc).
    cout<<" Following are some comparison opoerators:"<<endl;
    cout<<" 0---> FALSE & 1---> TRUE"<<endl;
    cout<<endl;
    cout<<"Checking whether a==b:"<<(a==b)<<endl; 
    cout<<"Checking whether a!=b:"<<(a!=b)<<endl;
    cout<<"Checking whether a<=b:"<<(a<=b)<<endl;
    cout<<"Checking whether a>=b:"<<(a>=b)<<endl;
    cout<<"Checking whether a>b:"<<(a>b)<<endl;
    cout<<"Checking whether a<b:"<<(a<b)<<endl;
    cout<<endl;


    //LOGICAL operators like logical and( && ) , logical or( || ) , logical not( ! ).
    cout<<"Logical and condition ((a==b) && (a<b)):"<<((a==b) && (a<b)) << endl;
    cout<<"Logical or condition ((a==b) || (a<b)):"<<((a==b) || (a<b)) << endl;
    cout<<"Logical not condition (!(a==b)):"<<(!(a==b)) << endl;


    return 0;
}