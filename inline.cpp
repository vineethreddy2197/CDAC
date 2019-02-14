#include<iostream>
#include<iomanip>
using namespace std;
inline int add(int a,int b)
{
	return (a+b);
}
inline int mul(int a,int b)
{
	return (a*b);
}
inline float div(int a,int b)
{
	return (float)a/b;
}
int main()
{
	cout<<add(2,3)<<endl;
	cout<<mul(2,3)<<endl;
	cout<<fixed;
	cout<<setprecision(2);
	cout<<div(2,3)<<endl;
	
	
}