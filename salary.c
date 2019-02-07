#include<stdio.h>
float gross(float bs,float hra,float da)
{
  float res;
  da=da*bs;
  hra=hra*bs;
  res=bs+hra+da;
   printf("%f",res);
}
int main()
{
   float bs,da,hra,gross_salary;
   printf("enter salary");
   scanf("%f",&bs);
   if(bs>=1 && bs<=4000)
      gross(bs,0.10,0.50);
    else if(bs>=4001 && bs<=8000)
       gross(bs,0.20,0.60);
    else if(bs>=8001 && bs<=12000)
        gross(bs,0.25,0.70);
    else
        gross(bs,0.30,0.80);

  return 0;
}  
   
   
   