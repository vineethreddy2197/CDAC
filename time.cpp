#include<iostream>
using namespace std;
class Time
{
	int hour;
	int minute;
	int second;
	public:
		Time()
		{
			hour=0;
			minute=0;
			second=0;
		}
		Time(int h,int m,int s)
		{
			hour=h;
			minute=m;
			second=s;
		}
		void display()
		{
			cout<<hour<<" : "<<minute<<" : "<<second<<endl;
		}
		Time add(Time a,Time b)
		{
			Time c;
			c.hour=(a.hour+b.hour)%24;
			c.minute=(a.minute+b.minute)%60;
			c.second=(a.second+b.second)%60;
			return c;
		}
};
int main()
{
	Time t;
	Time t1(4,20,20);
	Time t2(2,10,10);
	Time s=t.add(t1,t2);
	s.display();
	
}
