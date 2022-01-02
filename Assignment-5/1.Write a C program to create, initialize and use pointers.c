//create intialize use pointer
#include <stdio.h>

int main()
{
    int a=1,b=2;
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    
    printf("The value of two numbers:\n%d %d",*ptr1,*ptr2);

    return 0;
}

