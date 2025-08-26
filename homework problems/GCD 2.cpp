#include <iostream>
using namespace std;
class GCD
{
private:
    int a, b;

public:
    void getinput()
    {
        cout << "Enter the two numbers" << endl;
        cin >> a >> b;
    }
    int checkGCD(a, b)
    {
        if (y == 0)
        {
            return x;
        }
        else
        {
            return checkGCD(y, x % y);
        }
        void display()
        {
            int result = checkGCD(a, b);
            cout << "GCD is:" << result << endl;
        }
    };
    int main()
    {
        GCD s1;
        s1.getinput();
        s1.checkGCD();
        s1.display();
        return 0;
    }