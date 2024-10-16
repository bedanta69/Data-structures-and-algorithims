//call by value
//any changes made in the parameters of the sum function will not reflect in the main function
#include<iostream>
using namespace std;
int sum(int a, int b){
	int c = a+b;
	return c;
}
int main(){
	int num1=10, num2= 15;
	int add = sum(num1,num2);
	cout<<"sum is"<< add;
	return 0;
}
	
