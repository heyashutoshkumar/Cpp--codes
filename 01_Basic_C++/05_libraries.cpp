#include<iostream> //---------> Standard libary

#include<cmath>  //-------->standard library

#include "this.h"  //---------> User-defined library (this will show error if the same file/folder is not present in the same directory)
using namespace std;

int main(){
	int age;

	cout<<"Enter the value of Age:";   //----> without standard libary iostream we able not able to use cin & cout
	cin>>age;

	return 0;
}    