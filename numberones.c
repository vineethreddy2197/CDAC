#include<stdio.h>
int main()
{
      int number,rem=0,count=0;
      printf("enter the number");
      scanf("%d",&number);
      while(number!=0)
      {
	      rem=number%2;
	      number/=2;
	      if(rem==1)
		      count++;

      }	      
      printf("%d", count);
      return 0;
}
