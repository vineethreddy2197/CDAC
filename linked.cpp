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
		Node* insertFirst(int d)
		{
			Node *x=create(d);
			x->next=head;
			head=x;
			return head;
		}
		Node* insertLast(int d)
		{
			Node* x=create(d);
			Node *temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=x;
			return head;
		}
		void preverse(Node *head);
		void reverse(Node *head);
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
void LL::preverse(Node *temp)
{
	if(temp==NULL)
	{
		return;
	}
	preverse(temp->next);
	cout<<temp->data<<" ";
}
void LL::reverse(Node *temp)
{
	if(temp->next==NULL)
	{
		return;
	}
	preverse(temp->next);
	Node *p=temp->next;
	p->next=temp;
	temp->next=NULL;
	
}
int main()
{
	LL o;
	o.insertFirst(1);
	o.insertFirst(2);
	o.insertFirst(3);
	o.insertFirst(4);
	o.insertFirst(5);
	o.insertFirst(6);
	o.insertFirst(7);
	Node *thead=o.retHead();
	o.print();
	cout<<endl;
	o.reverse(thead);
	o.print();
}