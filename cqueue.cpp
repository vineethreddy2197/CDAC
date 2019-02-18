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
			f=-1;
			r=-1;
			k=n;
		}
		void enq(int x)
		{
				if(f==-1 && r==-1)
				{
					arr[++f]=x;
					cout<<"F : "<<f<<endl;
					arr[++r]=x;
					cout<<"R : "<<r<<endl;
				}
				else
				{
					r++;
					if(r==k-1 && f==0)
					{
						cout<<"Full"<<endl;
					}
					else{
					r=(r)%k;
					cout<<"R : "<<r<<endl;
					arr[r]=x;
					cout<<"F : "<<f<<endl;
					}
				}
		}
		int deq()
		{
			if(!isEmpty())
			{
				cout<<"F : "<<f<<endl;
				cout<<"R : "<<r<<endl;
				f=(f+1)%k;
			}
			
		}
		void display()
		{
			for(int i=f;(i)!=r+1;i++)
			{
				if(i>=k)
				{
					i=i%k;
				}
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
	o.enq(6);
	o.display();
	cout<<"--"<<endl;
	o.enq(7);
	o.display();
	cout<<"--"<<endl;
	o.enq(8);
	o.display();
	cout<<"--"<<endl;
	o.enq(9);
	o.display();
	cout<<"--"<<endl;
	o.enq(10);
	o.display();
	cout<<"--"<<endl;
	o.enq(11);
	o.display();
	cout<<"--"<<endl;
}