// Monolithic style of programming: Everything inside the main function
// example program: To find the area and perimeter of a rectangle with user input of length and bredth
#include <iostream>
using namespace std;
int main()
{
    int length = 0, bredth = 0;
    cout << "Enter the length and bredth of the rectangle:" << endl;
    cin >> length >> bredth;
    int area = length * bredth;
    int peri = 2 * (length + bredth);
    cout << "The area of the rectangle is:" << area << endl
         << "the perimeter of the rectangle is: " << peri << endl;
    return 0;
}