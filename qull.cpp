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
		Node* enq(int d)
		{
			Node *x=create(d);
			x->next=NULL;
			if(head==NULL)
			{
				head=x;
			}
			else
			{
				Node *temp=head;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=x;
			}
			return head;
		}
		int deq()
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
	o.enq(1);
	o.enq(2);
	o.enq(3);
	o.enq(4);
	o.enq(5);
	cout<<o.deq()<<endl;
	o.print();
}