#include<iostream>
using namespace std;
class Stack
{
	int top;
	int *arr;
	int ma;
	public:
		Stack(int n)
		{
			arr=new int[n];
			ma=n;
			top=-1;
		}
		void push(int a)
		{
			if(ma==top-1)
			{
				cout<<"Stack Full"<<endl;
			}
			else{
				arr[++top]=a;
			}
		}
		int pop()
		{
			if(!isEmpty())
			{
				int x=arr[top];
				top--;
				return x;
			}
			else
			{
				cout<<"lol"<<endl;
				return -999999;
			}
		}
		int peek()
		{
			return arr[top];
		}
		bool isEmpty()
		{
			if(top==-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		void display()
		{
			for(int i=0;i<=top;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
		
};
int main()
{
	Stack o(10);
	o.push(1);
	o.push(2);
	o.push(3);
	o.push(4);
	o.push(5);
	o.push(6);
	o.pop();
	o.pop();
	cout<<o.peek()<<endl;
	o.display();
	
	
}