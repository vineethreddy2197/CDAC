#include<stdio.h>
#include<string.h>
void find()
{
	FILE *fpr;
	fpr=fopen("a.txt","r+");
	FILE *fpw;
	fpw=fopen("a.txt","a+");
	char s[50];
	char sa[50];
	printf("Enter : ");
	scanf("%s[^\n]",&s);
	int a=0;
	int b=0;
	int i=0;
	int k=0;
	int l=0;
	int x;
	int y;
	while(!feof(fpr))
	{
		char c[10];
		if(fgetc(fpr)!=' ' || fgetc(fpr)!='\n')
		{
			c[i++]=fgetc(fpr);
			printf("%c",c[i]);
		}
		else
		{
			i=0;
			if(strcmp(s,c)==0)
			{
				x=k;
				y=l;
				while(x<y)
				{
					char temp=sa[x];
					sa[x]=sa[y];
					sa[y]=temp;
					x++;
					y--;
				}
				k=l+1;
			}
		}
		sa[l++]=fgetc(fpr);
	}
	sa[l]='\0';
	i=0;
	while(sa[i]!='\0')
	{
		fputc((int)sa[i],fpw);
	}
	
}
