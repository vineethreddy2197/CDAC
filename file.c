#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	fp=fopen("test.txt","r");
	char ch[50];
	char c;
	int i=0;
	while(!feof(fp))
	{
		c=fgetc(fp);
		printf("%c ",c);
		ch[i++]=c;
	}
	ch[i]='\0';
	printf("\n");
	fclose(fp);
	int j;
	for(j=0;j<strlen(ch);j++)
	{
		if(ch[j]=='/' && ch[j+1]=='/' && (j+1)<strlen(ch))
		{
			int k;
			for( k=j;k<strlen(ch);k++)
			{
				if(ch[k]=='\n')
				{
					break;
				}
				ch[k]=' ';
			}
		}
		else if(ch[j]=='/' && ch[j+1]=='*')
		{
			int l;
			for(l=j;(l+1)<strlen(ch);l++)
			{
				if(ch[l]=='*' && ch[l+1]=='/')
				{
					ch[l]=' ';
					ch[l+1]=' ';
					break;
				}
				ch[l]=' ';
			}
			
		}
	}
	printf("%s",ch);
	FILE *fpw;
	fpw=fopen("test.txt","w+");
	fprintf(fpw,"%s",ch);
	printf("\n");
	printf("lol");
}
