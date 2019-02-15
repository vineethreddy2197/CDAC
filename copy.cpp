#include<iostream>
using namespace std;
class Copy
{
	int a;
	int b;
	public:
		Copy(int x,int y)
		{
			a=x;
			b=y;
		}
		Copy(const Copy &o)
		{
			this->a=o.a;
			this->b=o.b;
		}
		void print()
		{
			cout<<"A: "<<a<<" "<<"B: "<<b<<endl;
		}
		
};
int main()
{
	Copy c1(1,2);
	Copy c2(c1);
	c2.print();
}