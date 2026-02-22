#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    double salary;

    void input() {
        cout << "Enter employee name: ";
        getline(cin, name);
        cout << "Enter salary: ";
        cin >> salary;

    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;


    Employee emp[10];

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << (i + 1) << ":\n";
        emp[i].input();
    }

    int idxMax = 0;
    for (int i = 1; i < n; i++) {
        if (emp[i].salary > emp[idxMax].salary) idxMax = i;
    }

    cout << "Highest Salary Employee:"<<endl;
    cout << "Name   : " << emp[idxMax].name << endl;
    cout << "Salary : " << emp[idxMax].salary << endl;
    return 0;
}
