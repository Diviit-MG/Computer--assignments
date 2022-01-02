//copy one string into another using pointers
#include <stdio.h>

int main()
{
    int n;
    printf("enter the length of the string:");
    scanf("%d",&n);
    
    char str1[n+1],str2[n+1],*ptr1,*ptr2;
    printf("enter the string:\n");
    scanf("%s",str1);
    ptr1=str1;
    ptr2=str2;
    
    
    for(int i=0;i<n;i++)
    {
        *(ptr2+i)=*(ptr1+i);
    }
    
    printf("the value of copied string:\n");
    for(int i=0;i<n;i++)
    {
        printf("%c",*(ptr2+i));
    }
    
    
}

