// In c and c++ we dont write instructions in the main function we simply write functions and call them in the main functiom
// for example
#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int bredth;
};
void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->bredth = b;
}
int area(struct Rectangle r)
{
    return r.length * r.bredth;
}
void changelength(struct Rectangle *r, int l)
{
    r->length = l;
}

int main()
{
    struct Rectangle r;
    initialize(&r, 20, 30);
    cout << "The area of the rectangle is:" << area(r) << endl;
    changelength(&r, 21);
    return 0;
}