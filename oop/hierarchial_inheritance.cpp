// one base class
// multiple derived class

#include <iostream>
using namespace std;
class base
{
public:
    void basefunc()
    {
        cout << "i am the base class function" << endl;
    }
};
class derived1 : public base
{
public:
    void derived1func()
    {
        cout << "i am a function from derived1 class" << endl;
    }
};
class derived2 : public base
{
public:
    void derived2func()
    {
        cout << "I am a function from the derived2 class" << endl;
    }
};
int main()
{
    derived1 d1;
    derived2 d2;
    d1.basefunc();
    d1.derived1func();
    d2.basefunc();
    d2.derived2func();

    return 0;
}
