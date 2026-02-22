#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int roll;
    double marks;

public:
    void input() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;

    }

    void display()  {
        cout << "Student Details"<<endl;
        cout << "Name  : " << name << endl;
        cout << "Roll  : " << roll << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}
