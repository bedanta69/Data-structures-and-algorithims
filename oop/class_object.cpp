// objects are entities in the real world
// classes are like the blueprint of those entities
#include <iostream>
#include <string>
using namespace std;
class Teacher
{
private:
  double salary;

public: // Access modifier
  // properties/ attributes
  string name;
  string dept;
  string subject;

  // methods/ member functions
  void changeDeppt(string newDept)
  {
    dept = newDept;
  }
  // setter function[set (update) the value of a private variable.]
  void setSalary(double s)
  {
    salary = s;
  }
  // getter function[Getter: get (read) the value of a private variable.]
  double getSalary()
  {
    return salary;
  }
};

int main()
{
  Teacher T1;
  T1.name = "Bedanta";
  T1.subject = "chess";
  T1.dept = "Information Technology";
  T1.setSalary(25000);
  cout << T1.getSalary() << endl;
  cout << T1.name << endl;
  return 0;
}