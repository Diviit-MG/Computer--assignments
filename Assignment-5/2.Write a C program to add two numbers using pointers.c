//add two numbers using pointers
#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the values of two numbers to be added:\n");
    scanf("%d%d",&a,&b);
    
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    
    printf("the sum of the two numbers are:%d",(*ptr1+*ptr2));

    return 0;
}


