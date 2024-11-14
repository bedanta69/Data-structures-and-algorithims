// Modular style of programming: breaking down the program into separate functions for each functionality
// example programme:finding the area and perimeter of a rectangle with user input of length and bredth
#include <iostream>
using namespace std;
int area(int l, int b)
{
    return l * b;
}
int perimeter(int l, int b)
{
    return 2 * (l + b);
}
int main()
{
    int length = 0, bredth = 0;
    cout << "Enter the length and bredth of the rectangle:" << endl;
    cin >> length >> bredth;
    int a = area(length, bredth);
    int p = perimeter(length, bredth);
    cout << "Area of the rectangle is:" << a << endl
         << "Perimeter of the rectangle is:" << p << endl;
}
