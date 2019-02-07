#include<stdio.h>
int main()
{
   int n,avg,min=1,max=0,count=0,sum=0;
   while(1)
   {
     scanf("%d",&n);
     if(n<=0)
      {
        break;
       }
      else
       {  
          count++;
          sum=sum+n;
           if(min>n)
             min=n;
           if(max<n)
             max=n;
         }
     }
     
     avg=sum/count;
     printf("%d %d %d %d",count,min,max,avg);
}