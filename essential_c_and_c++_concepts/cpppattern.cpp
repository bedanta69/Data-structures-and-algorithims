//converting the previous c program to cpp with proper structure
#include<iostream>
using namespace std;
class Rectangle{     // class
    private:
       int length;
       int bredth;
    public:
        Rectangle(int l,int b) //constructor
        {
             length = l;
             bredth = b;
        }
        int area(){
            return length*bredth;
        }
        void changelength(int l){
            length = l;
        }
};
int main(){
    Rectangle r (10,5);  //object creation
    r.area();   //pass in the parameters to find area
    r.changelength(15); //pass in the length to create new length
    return 0;
}