#include<stdio.h>
void count();
void rem();
void find();
int main()
{
	printf("1.Count \n");
	printf("2.Remove \n");
	printf("3.Find \n");
	printf("4.Replace \n");	
	int n;
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			count();
			break;
		case 2:
			rem();
			break;
		case 3:
			find();
			break;
		case 4:
			break; 
	}
}
