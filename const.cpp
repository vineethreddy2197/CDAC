#include<iostream>
using namespace std;
class Sample
{
	public:
		Sample()
		{
			cout<<"Constructor"<<endl;
		}
		~Sample()
		{
			cout<<"Destructor"<<endl;
		}
};
int main()
{
	Sample o;
	cout<<sizeof(o)<<endl;
}