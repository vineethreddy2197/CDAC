#include<stdio.h>
void mask(int number)
{       int ch,num;
	printf("1.bitwise and\n2.bitwise or\n3.bitwise exclusive or\n");
	scanf("%d",&ch);
	printf("enter the number for masking");
	scanf("%x",&num);
	switch(ch)
	{
		case 1: printf("%x",number&num);
		break;
		case 2:printf("%x",number|num);
		       break;
		case 3:printf("%x",number^num);
		       break;
		default: printf("invalid choice");
			 break;
	}
}
void shift(int number)
{
	int ch,num;
	printf("1.left shift\n2.right shift\n");
	scanf("%d",&ch);
	printf("enter the number of bits to be shifted\n");
	scanf("%d",&num);
	if(ch==1)
		printf("%x",number<<num);
	else if(ch==2)
		printf("%x",number>>num);
	else
		printf("invalid choice");

}

int main()
{
int number,choice;
do{
printf("enter the number\n");
scanf("%x",&number);
printf("choose the desired opertaion\n");
printf("1.compliment\n2.masking\n3.shift\4.exit\n");
scanf("%d",&choice);
switch(choice)
{
	case 1: printf("%x",~number);
		break;
	case 2: mask(number);
		break;
	case 3: shift(number);
		break;
	case 4: printf("exiting....");
		break;
         default: printf("random choice");
		  break;
}
}while(choice!=4);
return 0;
}

