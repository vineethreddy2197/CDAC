#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int p;
	scanf("%d",&p);
	int b;
	scanf("%d",&b);
	int temp=a;
	int *arr=(int*)calloc(8,sizeof(int));
	int k=0;
	while(a>0)
	{
		arr[k++]=a%2;
		a=a/2;
	}
	int i=0;
	for(i=0;i<=7;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	i=0;
	int j=0;
	for(i=7;i>=0;i--)
	{
		if(i>=p-1 && i<p+b-1)
		{
		if(arr[i]==0)
		{
			arr[i]=1;
		}
		else
		{
			arr[i]=0;
		}
		}
	}
	int t=1;
	int sum=0;
	for(i=0;i<=7;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	for(i=0;i<=7;i++)
	{
		sum=sum+t*arr[i];
		t=t*2;
	}
	printf("%d",sum);
}
