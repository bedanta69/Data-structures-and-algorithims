#include<cstdio>
using namespace std;

struct Rectangle
{
       int length;
       int bredth;
       char x;

};
int main(){
        struct Rectangle r1={1,2,'B'};
	printf("%d", sizeof(r1));/*The compiler shoud print 9 because int takes 4 byes and char takes 1 byte but the compiler prints 12 because the structure allotes 4 bytes to char as well it is called padding of memory*/
	return 0;

}
