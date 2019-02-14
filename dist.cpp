#include<iostream>
using namespace std;
class Distance2;
class Distance1
{
	int cm;
	int mt;
	public:
		Distance1(int m)
		{
			mt=m;
			cm=cm*1000;
		}
		int getd()
		{
			return mt;
		}
	friend void add(Distance1 d1,Distance2 d2);
};
class Distance2
{
	int ft;
	int in;
	public:
		Distance2(int m)
		{
			ft=m;
			in=m*12;
		}
		int getd()
		{
			return ft;
		}
		
	friend void add(Distance1 d1,Distance2 d2);
};
void add(Distance1 d1,Distance2 d2)
{
	cout<<"Meter : "<<(d1.getd()+(d2.getd())*(0.3))<<endl;
	cout<<"Feet : "<<(d1.getd()/(0.3)+(d2.getd()))<<endl;
}
int main()
{
	Distance1 a(2);
	Distance2 b(2);
	add(a,b);
}