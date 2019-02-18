#include<iostream>
#define MAX 10
using namespace std;
int main()
{
	string s;
	char a[MAX];
	int top=-1;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='(' || s[i]=='[' || s[i]=='{')
			{a[++top]=s.at(i);
			cout<<"Top : "<<top<<endl;}
		else
			if(s[i]==')' && a[top]=='(')
			{	top--;
				cout<<"Top : "<<top<<endl;
			}
			else if(s[i]==']' && a[top]=='[')
			{
				top--;
				cout<<"Top : "<<top<<endl;
			}
			else if(s[i]=='}' && a[top]=='{')
				{
				top--;
				cout<<"Top : "<<top<<endl;
				}
	}
	if(top==-1)
	{
		cout<<"Balanced"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}