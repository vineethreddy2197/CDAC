#include<iostream>
using namespace std;
static int k; 
class Polar
{
	int radius;
	int angle;
	public:
		Polar(int r,int a)
		{
			radius=r;
			angle=a;
			cout<<radius<<" "<<angle<<endl;
			k++;
			cout<<"--- "<<k<<endl;
		}
};
int main()
{
	Polar(1,1);
	Polar(1,1);
	Polar(1,1);
	Polar(1,1);
	Polar(1,1);
}