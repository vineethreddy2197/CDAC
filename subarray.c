#include<stdio.h>
int main()
{ 
  int n,s=0;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
  int sum;
int flag=0;
  scanf("%d",&sum);
  for(int i=0;i<n;i++)
   {     s=0;
      for(int j=i;j<n;j++)
       {
           s=s+a[j];
           if(s==sum)
            {
             printf("%d %d",i,j);
		flag=1;
                break;
             }
          
        }
       
   }
if(flag==0){printf("No \n");}

}


        