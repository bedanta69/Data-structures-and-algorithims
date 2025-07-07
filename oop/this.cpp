// this is a special pointer in c++ that points to the current object
// this->prop is same as *(this).prop

#include <iostream>
#include <string>
using namespace std;
class teacher
{
private:
    double salary;

public:
    teacher(string name, string department, string subject)
    {
        this->department = department;
        this->name = name;
        this->subject = subject;
    }
    void getinfo()
    {
        cout << "name:" << name << endl;
        cout << "department" << department << endl;
    }

    string name;
    string department;
    string subject;
};
int main()
{
    return 0;
}