#include<iostream>
using namespace std;
class Attendance{
private:
string inTime,outTime;
public:
void setTimes(string in,string out){if(inTime==""&&outTime==""){inTime=in;outTime=out;}}
string getInTime(){return inTime;}
string getOutTime(){return outTime;}
};
int main(){
Attendance a;
a.setTimes("9:00","17:00");
cout<<"Clock-in: "<<a.getInTime()<<endl;
cout<<"Clock-out: "<<a.getOutTime()<<endl;
a.setTimes("10:00","18:00");
cout<<"After trying to change:"<<endl;
cout<<"Clock-in: "<<a.getInTime()<<endl;
cout<<"Clock-out: "<<a.getOutTime()<<endl;
}
