#include<stdio.h>
int c;
void bin(int n)
{
if(n==0)
{return;}
else
{
bin(n/2);
if(n%2==1)
{c++;}
}
}

int main()
{
int n;
scanf("%d",&n);
bin(n);
printf("%d",c);
}
