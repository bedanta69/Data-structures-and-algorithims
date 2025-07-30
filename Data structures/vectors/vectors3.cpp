// vector functions
// size():returns the size of the vector
// push_back():used to insert an element at the end of the container
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd'};
    cout << "size =" << vec.size() << endl; // prints the size of the vector
    vec.push_back('e');                     // adds e at the end of the vector
    for (char val : vec)
    {
        cout << val << " ";
    }
    return 0;
}