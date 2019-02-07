#include<stdio.h>
int main()
{
	int N,iter,ncount,pcount,swapcount=0,temp;
	printf("Enter the size of the array");
	scanf("%d",&N);
	printf("enter %d elements",N);
	int arr[N];
	for(iter=0;iter<N;iter++)
	{scanf("%d",&arr[iter]);
	}
        for(iter=0;iter<N;iter++)
	{   
		if(arr[iter]<0)
		{
			temp=arr[swapcount];
			arr[swapcount]=arr[iter];
			arr[iter]=temp;
			swapcount++;
		}
	}
	for(iter=0;iter<N;iter++)
		printf("%d ",arr[iter]);
	return 0;
}

