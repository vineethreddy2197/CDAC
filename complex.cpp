#include<iostream>
using namespace std;
class Complex
{
	int a;
	int b;
	public:
		Complex()
		{
			a=0;
			b=0;
		}
		Complex(int x,int y)
		{
			a=x;
			b=y;
		}
		Complex(int k)
		{
			a=k;
			b=k;
		}
		friend void add(Complex *p,Complex *q);
		friend void mul(Complex *p,Complex *q);
};
void add(Complex *p,Complex *q)
{
	int c=0;
	int d=0;
	c=(p->a)+(q->a);
	d=(p->b)+(q->b);
	cout<<c<<" + i "<<d<<endl;
}
void mul(Complex *p,Complex *q)
{
	int c=0;
	int d=0;
	c=((p->a)*(q->a))-((p->b)*(q->b));
	d=((p->a)*(q->b))+((p->b)*(q->a));
	cout<<cout<<c<<" + i "<<d<<endl;
}

int main()
{
	Complex c1(1,1);
	Complex c2(1,1);
	add(&c1,&c2);
	mul(&c1,&c2);
}