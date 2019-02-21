#include<iostream>
using namespace std;
struct Node 
{
	int data;
	Node *next;
};
class LL
{
	Node *head;
	public:
		LL()
		{
			head=NULL;
		}
		Node* create(int d)
		{
			Node *ne=new Node();
			ne->data=d;
			ne->next=NULL;
			return ne;
		}
		Node* push(int d)
		{
			Node *x=create(d);
			x->next=head;
			head=x;
			return head;
		}
		int pop()
		{
			Node *temp=head;
			head=temp->next;
			int x=temp->data;
			delete temp;
			return x;
		}
		void print()
		{
			Node *temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
		Node *retHead()
		{
			return head;
		}
		
};
int main()
{
	LL o;
	o.push(1);
	o.push(2);
	o.push(3);
	o.push(4);
	o.push(5);
	cout<<o.pop()<<endl;
	o.print();
	
}