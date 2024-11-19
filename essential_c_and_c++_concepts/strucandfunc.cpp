// structure and function style of programming
#include <iostream>
#include <stdio.h>
using namespace std;
struct rectangle
{
    int length;
    int bredth;
};
void initialize(rectangle *r, int l, int b)
{
    r->length = l;
    r->bredth = b;
}
int area(struct rectangle r)
{
    return r.length * r.bredth;
}
int perimeter(rectangle r)
{
    int p;
    p = 2 * (r.length + r.bredth);
    return p;
}
int main()
{
    rectangle r;
    int l, b;
    cout << "Enter the Length and Bredth of the rectangle" << endl;
    cin >> l >> b;
    initialize(&r, l, b);
    int a = area(r);
    int peri = perimeter(r);
    cout << "The area of the rectangle is:" << a << "the perimeter of the rectangle is:" << peri << endl;
    return 0;
}