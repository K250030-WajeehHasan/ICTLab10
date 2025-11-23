#include<iostream>
using namespace std;
class Member{
string name;
int months;
public:
Member(string n,int m){name=n;months=m;}
void extend(int x){months+=x;}
void show(){cout<<name<<" membership: "<<months<<" months"<<endl;}
};
int main(){
Member m1("Ali",12);
Member m2("Sara",6);
m1.extend(6);
m2.extend(12);
m1.show();
m2.show();
}
