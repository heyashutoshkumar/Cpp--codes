#include<iostream>

int glo=5;
void sum(){
    int a;                      // --> local variable in the sum function body 
	std:: cout<<glo;
}
int main(){
	std :: cout <<glo <<'\n';   //--> till here no local variable , print global variable. 
	
	int glo=9;
	std::cout<<glo <<'\n';     //--> local variable found it will print local variable.
	
	glo=72;
	std:: cout<<glo <<'\n';    // --> value of the local variable changed so new local value printed.
	
	sum;                       // --> no local value in sum function body , so global value will be printed.
	
    std::cout<<sum;           //  -->will print 1(true) as sum exist. 
	return 0;
}
	

