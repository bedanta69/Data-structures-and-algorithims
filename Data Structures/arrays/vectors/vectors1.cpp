// STL:standard template library
// it is a collection of template classes and functions for common data structures and algorithms in C++.
// vector is the first stl container.
// vector syntax: vector<int> vec;
// vector syntax: vector<int> vec = {1,2,3,4};
// vector syntax: vector<int> vec(3,0):first value is the size and the second value is the value at each index.
// to compile the code use g++ -std=c++11 filename.
// vector is similar to that of an array with its size not being fixed.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec1;
    vector<int> vec2 = {1, 2, 3, 4};
    vector<int> vec3(5, 0);
    return 0;
}
