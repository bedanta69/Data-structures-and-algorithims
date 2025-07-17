// one derived class inherits from multiple base class
#include <iostream>
using namespace std;
class Base_1
{
public:
    void base_1func()
    {
        cout << "I am a function from the Base_1 class" << endl;
    }
};
class Base_2
{
public:
    void base_2func()
    {
        cout << "I am a function from the Base_2 class" << endl;
    }
};
class Derived : public Base_1, public Base_2
{
public:
    void derivedfunc()
    {
        cout << "I am a function from the Derived class" << endl;
    }
};
int main()
{
    Derived d1;
    d1.base_1func();
    d1.base_2func();
    d1.derivedfunc();
    return 0;
}
