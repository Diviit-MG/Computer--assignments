#include <stdio.h>

int main()
{
    int x,y;
    printf("enter the number for which multiplicative table should be printed:");
    scanf("%d",&x);
    printf("enter the limit upto which the table should proceed:");
    scanf("%d",&y);
    
    for(int i=0;i<=y;i++)
    {
        printf("%d x %d = %d \n",x,i,x*i);
    }

    return 0;
}

