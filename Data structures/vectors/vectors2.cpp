// A for-each loop(also called a range based for loop)is a simplified and cleaner way to iterate over elements in a vector (or any container taht supports iterators).
// syntax: for(datatype variable : container){
//      // use variable
//      }
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    for (char val : vec) // for each loop
    {
        cout << val << " ";
    }
    return 0;
}