#include<iostream>
using namespace std;
class Student{
string name;
int id;
string courses[5];
int count;
public:
Student(string n,int i){name=n;id=i;count=0;}
void addCourse(string c){
if(count<5){courses[count]=c;count++;cout<<c<<" added, slots left: "<<5-count<<endl;}
else{cout<<"Cannot add "<<c<<", limit reached"<<endl;}}
};
int main(){
Student s("Ali",101);
s.addCourse("Math");
s.addCourse("Physics");
s.addCourse("Chemistry");
s.addCourse("Bio");
s.addCourse("English");
s.addCourse("History");
}
