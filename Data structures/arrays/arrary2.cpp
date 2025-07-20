#include<iostream>
using namespace std;
int main(){
    int marks[5];
      
    //to perform operations on arrays we use loops
    //loops: 0 to size - 1

    //the size of an array is generally given in a variable called size or we have to calculate it.
    int size = sizeof(marks)/sizeof(int);
    for(int i =0; i<size; i++){
        cin>> marks[i];
    }
    for(int i=0; i<size; i++){
        cout<< marks[i] <<endl;
    }
    

    return 0; 
}