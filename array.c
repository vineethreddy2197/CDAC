#include<stdio.h>
void search(int arr[],int N,int sum)
{int i=0,j,initialindex=0,finalindex=0,compute,flag=0;
while(1){
	compute=0;
	for(j=i;j<N;j++)
	{     initialindex=i;   
             compute+=arr[j];
             if(compute==sum)
	     {     finalindex=j;
                    flag=1;
		     break;
	     }
	     else  if(compute>sum)
		{
			i++;
			break;
		}                         		     
	     else
		     continue;
	}
	if(flag==1)
		break;
	 if (i<=N)
	 {
		initialindex=finalindex=-1;
		break;
	 }	
	
}
if(initialindex==-1 && finalindex==-1)
	printf("no subarray");
else
printf("%d %d",initialindex,finalindex);

}

int main()
{
	int N=0,iter,sum;
	printf("enter the size of the array");

	scanf("%d",&N);
	printf("enter %d elements",N);
	int arr[N];
	for(iter=0;iter<N;iter++)
		scanf("%d",&arr[iter]);
	printf("enter sum ");
	scanf("%d",&sum);
       search(arr,N,sum);
	return 0;
}
