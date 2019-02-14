#include<iostream>
#include<string>
using namespace std;
class Student
{
	string name;
	int m1;
	int m2;
	int m3;
	public:
		Student(string n,int a,int b,int c)
		{
			name=n;
			m1=a;
			m2=b;
			m3=c;
		}
		string getName()
		{
			return name;
		}
		int getm1()
		{
			return m1;
		}
		int getm2()
		{
			return m2;
		}
		int getm3()
		{
			return m3;
		}
		
		
		
};
class CollegeCourse
{
		string name;
		int m1;
		int m2;
		int m3;
		int grade;
	public:
		void setData(Student o)
		{
			name=o.getName();
			m1=o.getm1();
			m2=o.getm2();
			m3=o.getm3();
		}
		int average()
		{
			return (m1+m2+m3)/3;
		
		}
		char retGrade()
		{
			grade=average();
			if(grade>90 && grade<100)
			{
				return 'A';
			}
			else if(grade<=90 && grade>80)
			{
				return 'B';
			}
			else if(grade<=80 && grade>70)
			{
				return 'B';
			}
			else
			{
				return 'F';
			}
		}
		void print()
		{
			cout<<"Name : "<<name<<" Grade : "<<retGrade()<<endl;
		}
		
};
int main()
{
	Student o("abc",90,80,70);
	CollegeCourse c;
	c.setData(o);
	c.print();
}