//BY DEFAULT POINT NUMBERS HAVE DOUBLE DATA TYPE.
#include<iostream>
using namespace std;
int main(){
    float d =12.7f;           // ---->> Here , we can use F or f for denoting float 
    long double e = 12.7l;   //---> Here, we can use capital L or l small for denoting the long double 

    //cheching the size of data type for the verification of data types
    cout<< "Memory occupied by 12.7 : " << sizeof(12.7)<<endl;
    cout<< " Memory occupied by 12.7f : " <<sizeof(12.7f)<<endl;
    cout<< " Memory occupied by 12.7F : "<<sizeof(12.7F)<<endl;
    cout<< " Memory occupied by 12.7l : "<<sizeof(12.7l)<<endl;
    cout<< " Memory occupied by 12.7L : "<<sizeof(12.7L)<<endl;
    

    // ********** REFERENCE VARIABLE ***********
    //Reference variable is used for assigning the one variable value that same value to another variable.
    //FOR EX: Ashutosh kumar ----->> Ashu ------->> Oam ;

    float x=12.5;
    float y=x;
    cout<< "value of x:"<<x<<endl;
    cout<< "value of y:"<<y<<endl;

    return 0;
}