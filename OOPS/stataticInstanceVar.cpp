#include<iostream>
using namespace std;

// class Student {
// public:
//     static int total;  // shared by all objects

//     Student() {
//         total++;  // jab bhi object banega, total++
//     }

//     void showTotal() {
//         cout << "Total Students: " << total << endl;
//     }
// };

// int Student::total = 0;  // static variable initialized to 0

// int main() {
//     Student s1, s2, s3;
//     s1.showTotal();
//     s2.showTotal();
// }

class amount{
    public:
    int balance; //instance var
    static int roi;//static var

    public:
    void setdata(int x){
        balance=x;
    }

    void display(){
        balance=balance+roi*1*balance;
        cout<<"new balance"<< balance<<endl;
    }

};
int amount :: roi=2;
int main(){
     amount a1,a2;
     //a1.balance=2000; error as balance is private

     a1.setdata(2000);
     a1.display();

     a2.setdata(3000);
     a2.display();
     cout<<a2.roi<<endl;

     //static ko hum class name ya object k throug n access kr skte h..pr contructor object bnte hi call ho jata h
    
     cout<<"class and objcet k thorugh acess "<<endl;
     cout<<a2.roi<<endl;//object k sath access hogya
     cout<<amount::roi<<endl;//class k through access krdia
}


