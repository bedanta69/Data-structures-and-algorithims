#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct rectangle
{
    int length;
    int bredth;
};
int main()
{
    struct rectangle r = {10, 5};
    cout << r.length << endl;
    cout << r.bredth << endl;

    struct rectangle *p = &r;
    cout << p->length << endl;
    cout << p->bredth << endl;

    /*allocating memory in heap for a structure*/
    struct rectangle *q;
    q = (struct rectangle *)malloc(sizeof(struct rectangle));
    q->length = 15;
    q->bredth = 20;

    printf("%d\n", q->length);
    cout << q->bredth << endl;
    return 0;
}