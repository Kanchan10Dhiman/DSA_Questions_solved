#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;

    // ✅ Default constructor (compiler khud bhi bana sakta agar hum kuch na likhte)
    Student() {
        roll = 0;
        name = "Unknown";
        cout << "Default constructor called!" << endl;
    }

    // ✅ Parameterized constructor
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized constructor called!" << endl;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    cout << "Object 1: Using Default Constructor ---" << endl;
    Student s1;  // Calls default constructor
    s1.display();

    cout << "-Obect 2: Using Parameterized Constructor ---" << endl;
    Student s2(101, "Kanchan");  // Calls parameterized constructor
    s2.display();

    return 0;
}
