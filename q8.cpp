#include<iostream>
using namespace std;
class MealOrder{
string name;
string meals[3];
int count;
public:
MealOrder(string n){name=n;count=0;}
void addMeal(string m){
if(count<3){meals[count]=m;count++;cout<<m<<" added, slots left: "<<3-count<<endl;}
else{cout<<"Cannot add "<<m<<", limit reached"<<endl;}}
};
int main(){
MealOrder mo("Sara");
mo.addMeal("Burger");
mo.addMeal("Pizza");
mo.addMeal("Sandwich");
mo.addMeal("Pasta");
}
