// Encaptulation is the wrapping up of data and member function in a single unit called class.
#include <iostream>
#include <string>
using namespace std;
class Account
{
private:   //hiding data (encaptulation)
    double balance;    
    string password;

public:
    string accountId;
    string username;
};

int main()
{

    return 0;
}