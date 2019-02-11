#include<stdio.h>
void count()
{
	FILE *fp;
	fp=fopen("a.txt","r");
	int alpha=0;
	int digits=0;
	int special=0;
	int space=0;
	char ch;
	while(!feof(fp))
	{
		ch=fgetc(fp);
		if((int)ch-48>=0 && (int)ch-48<=9)
		{
			digits++;
		}
		else if(ch==' ')
		{
			space++;
		}
		else if(((int)ch<97 && (int)ch>93) ||(int)ch<67 )
		{
			special++;
		}
		else
		{
			alpha++;
		}
	}
	printf("Digits : %d \n",digits);
	printf("Alphabets : %d \n",alpha);
	printf("Spaces : %d \n",space);
	printf("Special : %d \n",special);
}
