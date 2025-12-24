#include<iostream>
using namespace std;

class Student {
public:
    static int total;  // shared by all objects

    Student() {
        total++;  // jab bhi object banega, total++
    }

    void showTotal() {
        cout << "Total Students: " << total << endl;
    }
};

int Student::total = 0;  // static variable initialized to 0

class istudent{
   public:
   int std;
   static int age;
   int roll;

   istudent(){
    std=5;
   // age=4;
    age++;
   }
   void display(){
    cout<<"std:"<<std<<endl;
    cout<<"age:"<<age<<endl;
   }
};
int istudent::age=4;
int main() {
    Student s1, s2, s3;
    s1.showTotal();
    s2.showTotal();
    //istudent
    cout<<"istudent"<<endl;
    istudent is1,is2;
    is1.display();
    is2.display();
    
}