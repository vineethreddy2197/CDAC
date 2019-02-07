#include <stdio.h>

int main() 
{
	int n,num;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        num=i;
        for(int j=1;j<=n-i;j++)
        printf(" ");
        for(int j=1;j<=i;j++)
        {
        printf("%d",num);
        num--;
        }
        for(int j=2;j<=i;j++)
        {
            printf("%d",j);
            
        }
        printf("\n");
    }
    return 0;
}

