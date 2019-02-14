#include<iostream>
using namespace std;
class Matrix
{
	int a[2][2];
	public:
		Matrix()
		{
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					cin>>a[i][j];
				}
			}
		}
		friend void mul(Matrix,Matrix);
};
void mul(Matrix x,Matrix y)
{
	int c[2][2];
	for (int i = 0; i < 2; i++) 
    { 
        for (int j = 0; j < 2; j++) 
        { 
            c[i][j] = 0; 
            for (int k = 0; k < 2; k++) 
                c[i][j] += x.a[i][k] *  
                             y.a[k][j]; 
        } 
    } 
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	Matrix p;
	Matrix q;
	mul(p,q);
}