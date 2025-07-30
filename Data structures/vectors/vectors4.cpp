// vector function: pop_back(): deletes the last element of the vector

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    vec.pop_back(); // deletes the last element of the vector
    for (int val : vec)
    {
        cout << val << " ";
    }
    return 0;
}