#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
};

int main() {
    Student s1, s2;

    s1.name = "Ali";
    s1.roll = 1;

    s2.name = "Ahmed";  
    s2.roll = 2;

    cout << "Student 1:" << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Roll Number: " << s1.roll << endl;

    cout << "Student 2:" << endl;
    cout << "Name: " << s2.name << endl;
    cout << "Roll Number: " << s2.roll << endl;

    return 0;
}
