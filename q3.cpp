#include<iostream>
using namespace std;
class Book{
string title;
double price;
public:
Book(string t,double p){title=t;price=p;}
void setPrice(double p){price=p;}
double getPrice(){return price;}
void show(){cout<<title<<" new price: "<<price<<endl;}
};
int main(){
Book b("C++ Basics",500);
b.setPrice(600);
b.show();
}
