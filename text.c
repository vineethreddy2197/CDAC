#include <stdio.h>

int main() 
{
    char text[100];
    int dig=0,alphabets=0,space=0,tab=0,i=0;
    scanf("%[^\n]s",text);
    while(text[i]!='\0')
    {
        if(text[i]>='0'&&text[i]<='9')
          dig++;
          if(text[i]>='a'&&text[i]<='z'||text[i]>='A'&& text[i]<='Z')
            alphabets++;
            if(text[i]=='\t')
              tab++;
            if(text[i]==' ')
                space++;
            i++;
    }
    printf("%d %d %d %d",dig,alphabets,space,tab);
    return 0;
}

