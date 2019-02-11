#include<stdio.h>
#include<string.h>
void rem()
{
	FILE *fpr;
	fpr=fopen("a.txt","r+");
	FILE *fpw;
	fpw=fopen("a.txt","w+");
	char ch[50];
	int c=0;
	int flag;
	while(!feof(fpw))
	{
		ch[c++]=fgetc(fpw);
	}
	c=0;
	int k;
	while(ch[c]!='\0' && strlen(ch)>c+1)
	{
		k=c;
		if(ch[c]=='/' && ch[c+1]=='/')
		{
			while(ch[k]!='\n')
			{
				ch[k]=' ';
				k++;
			}
		}
		c=k;
	}
	int h=0;
	while(ch[h]!='\0')
	{
		fputc((int)ch[h],fpw);
	}
}
