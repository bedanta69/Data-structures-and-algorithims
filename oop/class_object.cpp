// objects are entities in the real world
// classes are like the blueprint of those entities
#include <iostream>
#include <string>
using namespace std;
class Teacher
{
public: // Access modifier
  // properties/ attributes
  string name;
  string dept;
  string subject;
  float salary;

  // methods/ member functions
  void changeDeppt(string newDept)
  {
    dept = newDept;
  }
};

int main()
{
  Teacher T1;
  T1.name = "Bedanta";
  T1.subject = "chess";
  T1.dept = "Information Technology";
  T1.salary = 2500;
  cout << T1.name << endl;
  return 0;
}