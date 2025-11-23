#include <iostream>
using namespace std;

class Movie {
public:
    string title;

private:
    float price;

public:
    void setPrice(float p) {
        if (p >= 0)
            price = p;
        else
            cout << "Invalid price. Cannot be negative." << endl;
    }

    float getPrice() {
        return price;
    }
};

int main() {
    Movie m;

    m.title = "Inception";
    m.setPrice(120);

    cout << "Title: " << m.title << endl;
    cout << "Price: " << m.getPrice() << endl;

    m.setPrice(-50);

    cout << "Price after invalid update: " << m.getPrice() << endl;

    return 0;
}
