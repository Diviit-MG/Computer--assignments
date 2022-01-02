//length of string
#include <stdio.h>

int main()
{
    int count=0;
    char str[1000],*ptr;
    printf("enter the string:\n");
    scanf("%s",str);
    ptr=str;
    
    for(int i=0;i<1000;i++)
    {
        if(*(ptr+i)!='\0')
        {
            count++;
        }
        else
        {
            break;
        }
    }
    
    printf("the length of the string:%d",count);
}

