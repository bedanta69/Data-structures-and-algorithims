// one base class
// one derived class
#include <iostream>
using namespace std;
class Base
{
public:
    void basefunc()
    {
        cout << "I am the function from the base class" << endl;
    }
};
class derived : public Base
{
public:
    void derivedfunc()
    {
        cout << "I am the function from the derived class" << endl;
    }
};
int main()
{
    derived d1;
    d1.basefunc();
    d1.derivedfunc();
    return 0;
}