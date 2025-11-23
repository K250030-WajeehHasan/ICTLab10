#include<iostream>
using namespace std;
class Patient{
private:
int age;
string disease;
public:
void setAge(int a){age=a;}
void setDisease(string d){d=disease;}
int getAge(){return age;}
string getDisease(){return disease;}
void show(){cout<<"Age: "<<age<<", Disease: "<<disease<<endl;}
};
int main(){
Patient p;
p.setAge(30);
p.setDisease("Flu");
p.show();
}
