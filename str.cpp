#include<iostream>
#include<string>
#include<stdlib.h>
#include<cstring>
#include<ctype.h>
using namespace std;
class String
{
	public:
	char *a;
	String()
	{
		a=NULL;
	}
	String(char *s)
	{
		a=(char*)malloc(strlen(s)*sizeof(char));
		strcpy(a,s);
	}
	friend char* operator + (String x,String y);
    String operator = (String x)
	{
		char *s=(char*)malloc(strlen(x.a)*sizeof(char));
		strcat(s,x.a);
		String l(s);
		return l;
	}
	char operator [](int i)
	{
		return this->a[i];
	}
	friend istream& operator >>(istream&,String &o);
	friend ostream& operator <<(ostream&,String &o);
};
istream& operator >>(istream&,String &o)
{
	o.a=(char*)malloc(50*sizeof(char));
	cin>>o.a;
}
ostream& operator <<(ostream&,String &o)
{
	cout<<o.a<<endl;
}
char* operator + (String x,String y)
	{
		char *s;
		s=(char*)malloc((strlen(x.a)+strlen(y.a))*sizeof(char));
		strcpy(s,x.a);
		strcat(s,y.a);
		return s;
	}
int main()
{
	char a[3]={'a','b','c'};
	String s(a);
	cout<<s[1]<<endl;

}