#include<iostream>
using namespace std;
class Student
{
public:
	int roll;
	string name;
	int subs;
	int tot;
	char grade;
	int avg;
	friend istream& operator >> (istream &,Student &a);
	friend ostream& operator << (ostream &,Student &a);
		
};
istream& operator>>(istream &,Student &a)
{
	cin>>a.name>>a.roll>>a.subs;
	int t=0;
	for(int i=0;i<a.subs;i++)
	{
		int k;
		cin>>k;
		t=t+k;
	}
	a.tot=t;
	a.avg=t/(a.subs);
	return cin;
	
}
ostream& operator<<(ostream &,Student &a)
{
	cout<<"Roll : "<<a.roll<<endl;
	cout<<"Name : "<<a.name<<endl;
	cout<<"Total : "<<a.tot<<endl;
	cout<<"Avg : "<<a.avg<<endl;
	return cout;
}

int main()
{
	Student s;
	cin>>s;
	cout<<s;
}