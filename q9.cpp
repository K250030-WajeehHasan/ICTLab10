#include <iostream>
#include <cctype>
using namespace std;
class Passenger {
private:
    string name;
    int age;
    string seatNumber;
public:
    Passenger(string n) {
        name = n;
        age = 0;
        seatNumber = "";
    }
    bool setAge(int a) {
        if (a >= 1 && a <= 120) {
            age = a;
            return true;
        }
        return false;
    }
    bool setSeat(string s) {
        int len = s.length();
        if (len < 2) return false;
        if (!isalpha(s[len - 1])) return false;
        if (!isdigit(s[0])) return false;
        seatNumber = s;
        return true;
    }
    void show() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Seat: " << seatNumber << endl;
    }
};
int main() {
    Passenger p("Ali");
    int a;
    string seat;
    cout << "Enter age: ";
    cin >> a;
    if (p.setAge(a))
        cout << "Age updated.\n";
    else
        cout << "Invalid age!\n";
    cout << "Enter seat (example 12A): ";
    cin >> seat;
    if (p.setSeat(seat))
        cout << "Seat updated.\n";
    else
        cout << "Invalid seat!\n";
    cout << "\nPassenger details:\n";
    p.show();
    return 0;
}
