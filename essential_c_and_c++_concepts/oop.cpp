// The object oriented style of programming
#include <iostream>
#include <stdio.h>
using namespace std;
class rectangle
{
public:
    int length;
    int bredth;

    void initialize(int l, int b)
    {
        length = l;
        bredth = b;
    }
    int area()
    {
        return length * bredth;
    }
    int perimeter()
    {
        int p;
        p = 2 * (length + bredth);
        return p;
    }
};
int main()
{
    rectangle r;
    int l, b;
    cout << "Enter the Length and Bredth of the rectangle" << endl;
    cin >> l >> b;
    r.initialize(l, b);
    int a = r.area();
    int peri = r.perimeter();
    cout << "The area of the rectangle is:" << a << "the perimeter of the rectangle is:" << peri << endl;
    return 0;
}