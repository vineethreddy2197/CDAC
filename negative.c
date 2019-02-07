#include<stdio.h>
#include<stdlib.h>
int main()
{ 
  int n;
   scanf("%d",&n);
  int a[n];
int *b;
b=(int*)calloc(n,sizeof(n));
   for(int i=0;i<n;i++)
     {scanf("%d",&a[i]);}
int j=n-1;
int k=0;
  for(int i=0;i<n;i++)
    {
      if(a[i]<0)
         {
    b[k++]=a[i];
}
	// printf("%d \n",b[i]);}
       else
          {
         b[j]=a[i];
	 
	j--;
           }
     }
printf(" ----- \n");
  for(int i=0;i<n;i++)
    {printf("%d \n",b[i]);}
}