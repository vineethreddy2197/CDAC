#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
class Point
{
	int x;
	int y;
	public:
		Point(int a,int b)
		{
			x=a;
			y=b;
		}
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}
		friend void dist(Point p,Point q);
};
void dist(Point p,Point q)
{
	float d;
	d=sqrt((p.getx()-q.getx())*(p.getx()-q.getx())-(p.gety()-q.gety())*(p.gety()-q.gety()));
	cout<<d<<endl;
}
int main()
{
	Point p(10,10);
	Point q(2,3);
	dist(p,q);
}