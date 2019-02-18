#include<iostream>
using namespace std;
class Queue
{
	int f;
	int r;
	int *arr;
	int k;
	public:
		Queue(int n)
		{
			arr=new int[n];
			f=0;
			r=0;
			k=n;
		}
		void enq(int x)
		{
			if((r+1)!=k-1)
			{
				if(f==-1 && r==-1)
				{
					arr[f++]=x;
					arr[r++]=x;
				}
				else
				{
					arr[r++]=x;
				}
			}
			else
			{
				cout<<"Over"<<endl;
			}
		}
		int deq()
		{
			if(!isEmpty())
			{
				f++;
			}
			
		}
		void display()
		{
			for(int i=f;i<r;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
		bool isEmpty()
		{
			if(f==-1 && r==-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};
int main()
{
	Queue o(10);
	o.enq(1);
	o.display();
	cout<<"--"<<endl;;
	o.enq(2);
	o.display();
	cout<<"--"<<endl;
	o.enq(3);
	o.display();
	cout<<"--"<<endl;
	o.enq(4);
	o.display();
	cout<<"--"<<endl;
	o.enq(5);
	o.display();
	cout<<"--"<<endl;
	o.enq(5);
	o.display();
	cout<<"--"<<endl;
	o.enq(5);
	o.display();
	cout<<"--"<<endl;
	o.enq(5);
	o.display();
	cout<<"--"<<endl;
	o.enq(5);
	o.display();
	cout<<"--"<<endl;
	o.enq(5);
	o.display();
	cout<<"--"<<endl;
	o.enq(5);
	o.display();
	cout<<"--"<<endl;
}