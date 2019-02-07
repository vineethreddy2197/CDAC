#include<stdio.h>
void binary(int n);
void hex(int n);
int main()
{ 
  int n;
  scanf("%d",&n);
   binary(n);
   hex(n);
  return 0;
   
}
  
void binary(int n)
{
   
   int b[100],i=0;
   while(n>0)
    {
      b[i]=n%2;
      n=n/2;
      i++;
     }
    for(int j=i-1;j>=0;j--)
     printf("%d",b[j]);
   printf("\n");
}
void hex(int n)
{
   char hex[100];
    int i=0;
    while(n!=0)
    {
      int temp=0;
      temp=n%16;
      if(temp<10)
        {
         hex[i]=temp+48;
           i++;
          }
      else
        {
         hex[i]=temp+55;
       i++;
        }
      n=n/16;
     }
    for(int j=i-1;j>=0;j--)
    printf("%c",hex[j]);

}