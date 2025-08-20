// vector function: front(); : prints the first element of the vector
// vector function: back(); : prints the value at the last index of the vector
// vector function: at(i); : prints the value at the ith index of the vector
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(2) << endl;
    return 0;
}