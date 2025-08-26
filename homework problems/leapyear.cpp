#include<iostream>
using namespace std;
class leapyear{
    private:
       int year;
    public:
       void getyear(){
           cout<<"Enter year"<<endl;
           cin >> year;
       }
       void checkleap(){
           if((year%4==0 && year%100 !=0)||(year%400==0)){
                cout<<"Leap Year"<<endl;
           }else{
                cout<<"The year isnt leap"<<endl;
           }
       };

};
int main(){
    leapyear l;
    l.getyear();
    l.checkleap();
    return 0;
}