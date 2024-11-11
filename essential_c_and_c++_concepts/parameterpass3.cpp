// call by reference
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int num1 = 10;
    int num2 = 20;
    swap(num1, num2);

    cout << "first number:" << num1 << endl;
    cout << "second number:" << num2 << endl;
    return 0;
}