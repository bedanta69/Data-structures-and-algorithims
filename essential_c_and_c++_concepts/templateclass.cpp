#include <iostream>
using namespace std;

template <class MyType>
class MyClass
{
public:
    MyType first;
    MyType second;

    MyClass(MyType f, MyType s)
    {
        first = f;
        second = s;
    }
};

int main()
{
    // Use MyClass with strings
    MyClass<string> stringObj("Hello", "World");
    cout << stringObj.first << " " << stringObj.second << "\n";

    // Use MyClass with integers
    MyClass<int> intObj(4, 5);
    cout << intObj.first << " " << intObj.second << "\n";

    return 0;
}