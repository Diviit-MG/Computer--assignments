// swap using pointers
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the values of two numbers:\n");
    scanf("%d%d",&a,&b);
    
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    printf("\nthe numbers before swap:\n%d\n%d",*ptr1,*ptr2);
    
    c=*ptr2;
    *ptr2=*ptr1;
    *ptr1=c;
    
    printf("\nthe value of numbers after swapping:\n%d\n%d",*ptr1,*ptr2);

    return 0;
}


