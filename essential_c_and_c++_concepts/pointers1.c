/*pointers are used for accessing memory , Accessing resources and passing parameters*/

#include<stdio.h>
int main(){
        int a = 15;
	int *p; /*Declaring a pointer variable*/
	p = &a; /*Assignment or initilazation  of a pointer*/
	printf("%d\n", *p);/*drefrencing of the pointer variaable*/
	printf("%d", p);/*printing the address of p*/
	return 0;
}
