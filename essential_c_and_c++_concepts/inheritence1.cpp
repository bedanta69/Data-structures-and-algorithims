//Inheritence: When properties & member function of base class are passed on to the derived class
//Inheritence is used basically for code reusability.
//constructor: while making the object the base class constructor gets called first and then the derived class constructor gets called
//destructor: while the object is destroyed destructors are called from derived to base class.

#include<iostream>
#include<string>
using namespace std;
class Person{
public:
     string name;
     int age;


};
class Student: public Person{
      public :
        int rollno;
        void getinfo(){
            cout <<"name:"<< name << endl;
            cout <<"age:"<< age << endl;
            cout << "rollno:" << rollno;
        };

};

int main(){
     Student s1;
     s1.name = "Bedanta";
     s1.age = 20;
     s1.rollno = 1234;

     s1.getinfo();
     return 0;
}
