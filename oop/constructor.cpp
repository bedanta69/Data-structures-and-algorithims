// Constructor
// Special method invoked automatically at time of object creation.Used for Initilisation
// same name as class
// constructor doesnot have a return type
// Only called once (automatically),at object creation
// Memory allocatioon happens when constructor is called
// There are three types of constructor: parameterized,non parameterized and copy constructor.
// Constructor overloading is a feature in object-oriented programming (like C++ or Java) that allows a class to have multiple constructors with the same name (the class name) but different parameter lists

#include <iostream>
#include <string>
using namespace std;
class teacher
{
private:
    double salary;

public:
    // non paramatarized constructor
    teacher()
    {
        cout << "I am a default constructor" << endl;
    }
    // paramatarized constructor
    teacher(string n, string d, string s)
    {
        department = d;
        name = n;
        subject = s;
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
    teacher t1;                                       // default constructor will be called
    teacher t2("Bedanta", "computer science", "C++"); // paramatarized constructor will be called
    t2.getinfo();
    return 0;
}