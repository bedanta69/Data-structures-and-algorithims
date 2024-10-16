//call by value (parameters in the swap function are pointers)
#include<iostream>
using namespace std;
void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main(){
	int num1 =10, num2 =15;
	swap(&num1,&num2);
	cout<<"the first number"<<num1<<endl;
	cout<<"the second number"<<num2<<endl;
	return 0;
}
	


