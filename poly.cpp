#include<iostream>
using namespace std;
struct Node
{
	int co;
	int po;
	Node *next;
};
class Poly
{
	public:
		Node *head;
		Poly()
		{
			head=NULL;
		}
		Node* create(int c,int p)
		{
			Node *ne=new Node();
			ne->co=c;
			ne->po=p;
			ne->next=NULL;
			return ne;
		}
		Node* insert(int c,int p)
		{
			Node *x=create(c,p);
			x->next=head;
			head=x;
			return head;
		}
		void print(Node *x)
		{
			Node *temp=x;
			while(temp!=NULL)
			{
				cout<<temp->co<<" "<<temp->po<<" ";
			}
			cout<<endl;
		}
		Node* getHead()
		{
			return head;
		}
};
int main()
{
	Poly p1;
	Poly p2;
	Poly p3;
	p1.insert(2,2);
	p1.insert(2,1);
	p1.insert(2,0);
	p2.insert(2,2);
	p2.insert(2,1);
	p2.insert(2,0);
	Node* t1;
	Node* t2;
	while(t1 && t2)
	{
		t1=p1.getHead();
		t2=p2.getHead();
		if(t1->po > t2->po)
		{
			if(t1==NULL)
			{
				p3.create(t1->co,t1->po);
				t1=p3.getHead();
			}
			else
			{
				p3.insert(t1->co,t1->po);
				t1=p3.getHead();
			}
			cout<<"1"<<endl;
		}
		else if(t1->po < t2->po)
		{
			if(t2==NULL)
			{
				p3.create(t2->co,t2->po);
				t2=p3.getHead();
			}
			else
			{
				p3.insert(t2->co,t2->po);
				t2=p3.getHead();
			}
			cout<<"2"<<endl;			
		}
		else
		{
			if(t2==NULL || t1==NULL)
			{
				break;
			}
			else
			{
				p3.insert(t2->co+t1->co,t2->po);
				t2=p3.getHead();
			}
			cout<<"3"<<endl;
		}
	}
	while(t1 || t2)
	{
		t1=p1.getHead();
		t2=p2.getHead();
		if(t1==NULL && t2==NULL)
		{
			break;
		}
		if(t1->next)
		{
			p3.insert(t1->co,t1->po);
			t1=p3.getHead();
			cout<<"4"<<endl;
		}
		if(t2->next)
		{
			p3.insert(t2->co,t2->po);
			t2=p3.getHead();
			cout<<"5"<<endl;
		}
	}
	p3.print(p3.getHead());
	
	
}
