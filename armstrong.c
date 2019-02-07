#include<stdio.h>
int main()
{
   int n,t,res=0;
   scanf("%d",&n);
   int temp=n;
   while(n>0)
   {
     t=n%10;
     res=res+t*t*t;
     n=n/10;
   }
   if(res==temp)
     printf("number is a armstrong number");
   else 
     printf("not a armstrong number");
  }
     
