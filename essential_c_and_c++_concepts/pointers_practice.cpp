/*Size of a pointer is independent of its data type i.e every pointer will allocate same memory for any data tpe*/
#include<iostream>
#include<stdlib.h>
int main(){
        int*p;
	p =(int*)malloc(5*sizeof(int));/*allocating a pointer for an array*/
	p[0]=10;p[1]=15;p[2]=20;p[3]=21;p[4]=90;
	for(int i =0; i<5;i++){
		printf("%d\n",p[i]);
	}
	free(p); /*deleting the allocated memory in heap*/
	return 0;
}

