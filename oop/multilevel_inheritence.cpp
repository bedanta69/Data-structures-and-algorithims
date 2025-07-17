// Multilevel Inheritance is a type of inheritance where a class is derived from another derived class, forming a hierarchy of inheritance across multiple levels.
#include <iostream>
using namespace std;
class Base
{
public:
    void Basefunc()
    {
        cout << "I am the function from the base class" << endl;
    }
};
class derived_1 : public Base
{
public:
    void derived_1func()
    {
        cout << "I am a function from the derived_1 class" << endl;
    }
};
class derived_2 : public derived_1
{
public:
    void derived_2func()
    {
        cout << "I am a function from the derived_2 class" << endl;
    }
};
int main()
{
    derived_2 d;
    d.Basefunc();
    d.derived_1func();
    d.derived_2func();
    return 0;
}