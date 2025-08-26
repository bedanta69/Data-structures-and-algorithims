#include <iostream>
using namespace std;

class GCD
{
public:
    int compute(int a, int b)
    {
        if (b == 0)
            return a;
        return compute(b, a % b);
    }
};

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    GCD obj;
    int result = obj.compute(num1, num2);

    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
