// Special Constructor (Default) used to copy properties of one object into another
// Shallow & Deep copy :
// Shallow copy: A shallow copy of an object copies all of the member values from one object to another.
// Deep copy: A deep copy,on the other hand not only copies the member values but also makes copies of any dynamically alloted memory that the members point to.
// the default copy constructor is always shallow copy. Deep copy is only achieved via writing it

// Shallow copy

#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    string name;
    double *cgpaptr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }
    void getInfo()
    {
        cout << "name :" << name << endl;
        cout << "Cgpa :" << *cgpaptr << endl;
    }
    Student(Student &obj)
    { // copy constructor
        this->name = obj.name;
        this->cgpaptr = obj.cgpaptr;
    }
};

int main()
{
    Student S1("Bedanta kashyap", 6.5);
    Student S2(S1);
    *(S2.cgpaptr) = 6.9;
    S1.getInfo(); // although cgpa of S1 wasnot changed it got automatically changed due to shallow copy
    return 0;
}