// combination of two or more types of inheritence
// to avoid the problem of ambiguity use virtual inheritence
#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Class A\n";
    }
};

class B : virtual public A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
};

int main()
{
    D obj;
    obj.show(); // Only one copy of A is inherited due to virtual inheritance
    return 0;
}
