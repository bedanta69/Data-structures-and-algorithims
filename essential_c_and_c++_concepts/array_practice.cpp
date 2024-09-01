#include<iostream>
using namespace std;
int main(){
	int A[5];
	A[0]=12;
	A[1]=12;
	A[2]=25;
	A[3]=112;
	A[4]=14;
	cout<<sizeof(A)<<endl;/*prints the memory size of the array A */
        cout<<A[1]<<endl;
	for(int x:A){
		cout<<x<<endl;
	}
         
	return 0;
/*an array of variable size can also be created using user input but the array cannot be initialized*/
}
