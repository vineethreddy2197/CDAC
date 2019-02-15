#include<iostream>
using namespace std;
class Complex
{
	public:
		int a;
		int b;
		Complex()
		{
			a=0;
			b=0;
		}
		Complex(int p,int q)
		{
			a=p;
			b=q;
		}
		Complex operator +(Complex &o)
		{
			Complex x;
			x.a=a+o.a;
			x.b=b+o.b;
			return x;
		}
		Complex operator -(Complex &o)
		{
			Complex x;
			x.a=a-o.a;
			x.b=b-o.b;
			return x;
		}
		Complex operator ++()
		{
			++this->a;
			++this->b;
			return *this;
			
		}
		Complex operator ++(int)
		{
			this->a=this->a+1;
			this->b=this->b+1;
			return *this;
		}
		void print()
		{
			cout<<"Real : "<<a<<" "<<"Imagin : "<<b<<endl;
		}
		Complex operator==(Complex o)
		{
			if(this->a==o.a && this->b==o.b)
			{
				cout<<"Equal"<<endl;
			}
			else
			{
				cout<<"Not Equal"<<endl;
			}
		}
		friend istream& operator >>(istream&,Complex &o);
		friend ostream& operator <<(ostream&,Complex &o);
		
};
istream& operator >>(istream&,Complex &o)
{
	cin>>o.a>>o.b;
}
ostream& operator <<(ostream&,Complex &o)
{
	cout<<"Real and Imagn  "<<o.a<<" "<<o.b<<endl;
}
int main()
{
	Complex r1;
	cin>>r1;
	r1++;
	cout<<r1;
}