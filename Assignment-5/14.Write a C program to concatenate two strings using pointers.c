//concatenate two strings using pointers
#include <stdio.h>

int main()
{
    int n;
    printf("enter the length of the strings:");
    scanf("%d",&n);
    
    char str1[n+1],str2[n+1],str3[2*n+1],*ptr1,*ptr2,*ptr3;
    printf("enter the first string:\n");
    scanf("%s",str1);
    ptr1=str1;
    printf("enter the second string:\n");
    scanf("%s",str1);
    ptr2=str2;
    
    ptr3=str3;
    
    for(int i=0;i<n;i++)
    {
        *(ptr3+i)=*(ptr1+i);
    }
    for(int i=n;i<(2*n);i++)
    {
        *(ptr3+i)=*(ptr2+i);
    }
    *(ptr3+((2*n)))='\0';
    
    printf("the concatenated string\n");
    for(int i=0;i<=(2*n);i++)
    {
        printf("%c",*(ptr3+i));
    }
    
}

