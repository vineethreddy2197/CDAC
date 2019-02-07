#include<stdio.h>
int main()
{
  int val=0xCAFE,rev,rotate;
  int i;
  i=(val&0xF);
  if(i==0x7||i==0xB||i==0xD||i==0xE||i==0xF)
   printf("on\n");
   rev=((0xFF &val)<<8)|(val>>8);
   printf("%X\n",rev);
   rotate=(val>>4)|((val&0xF)<<12);
   printf("%X",rotate);
}