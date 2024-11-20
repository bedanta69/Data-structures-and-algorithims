#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int bredth;

public:
    Rectangle()
    {
        length = 0;
        bredth = 0;
    }
    Rectangle(int l, int b)
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
        return 2 * (length + bredth);
    }
    ~Rectangle()
    {
        cout << "Destructor" << endl;
    }
};
int main()
{
    Rectangle r(10, 5);
    cout << "Area" << r.area() << endl;
    cout << "perimeter" << r.perimeter() << endl;
    return 0;
}
