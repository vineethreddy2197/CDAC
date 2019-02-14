#include<iostream>
using namespace std;
class Employee
{
	string name;
	int no;
	int sal;
	public:
		void print()
		{
			cout<<"Name : "<<this->name<<endl;
			cout<<"Roll : "<<this->no<<endl;
			cout<<"Salary : "<<this->sal<<endl;
		}
		~Employee()
		{
			cout<<"All men must die"<<endl;
		}
		friend istream& operator >> (istream &,Employee &e);
		
};
istream& operator >> (istream &,Employee &e)
{
	cin>>e.name>>e.no>>e.sal;
}
int main()
{
	Employee *x=new Employee[5];
	for(int i=0;i<5;i++)
	{
		cin>>x[i];
		x[i].print();
	}
	
}
