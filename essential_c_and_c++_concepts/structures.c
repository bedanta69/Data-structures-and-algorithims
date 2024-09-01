/*Structures are a way to group several related variables in a single place*/
#include<stdio.h>
struct Rectangle  /*structure type declaration*/
{
	int length;
	int bredth;
};
int main(){
    struct Rectangle r = {10,5}; /*declaration,initilization*/
    printf("%d",sizeof(r) ); /*prints the memory size of structure r*/
    r.length=15; /* . method is used to read and wite the contents of a structure*/
    r.bredth=10;
    printf("\narea of the rectangle r is : %d",  r.length* r.bredth);
    printf("\n%d", r.length);
    printf("\n%d",r.bredth);

    return 0;
}

