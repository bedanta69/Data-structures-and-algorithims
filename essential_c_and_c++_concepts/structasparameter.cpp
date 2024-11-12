// structure can be passed by value,reference as well as address
#include <iostream>
#include <stdio.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{

    struct Rectangle r = {10, 5};
    printf("Length %d \nBredth %d \n", r.length, r.breadth);
    return 0;
}