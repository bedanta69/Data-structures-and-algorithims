// Bitwise operators are operators in programming that work directly on the binary (bit-level) representation of integers. Instead of working with the value as a whole, they manipulate the individual bits (0 or 1) inside the number.
// Bitwise operators : Bitwise &
#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 8;
    cout << (a & b) << endl; // 0 [4 & 8=0 ]
    return 0;
}