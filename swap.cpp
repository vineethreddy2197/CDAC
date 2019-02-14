#include<iostream>
using namespace std;
void swap_r(int *a,int *b)
{
	int *temp=a;
	a=b;
	b=temp;
	cout<<(*a)<<" "<<(*b)<<endl;
}
void swap_v(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
	cout<<(a)<<" "<<(b)<<endl;
}

int main()
{
	cout<<"1.Ref \n"<<"2.Val \n"<<endl;
	int c;
	cin>>c;
	int a=1;
	int b=2;
	if(c==1)
		swap_r(&a,&b);
	else
		swap_v(a,b);
}