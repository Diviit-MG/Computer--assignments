//find factors
#include <stdio.h>

int main()
{
    int x,y;
    printf("enter the number:");
    scanf("%d",&x);
    y=x/2;
    for(int i=1;i<=y;i++)
    {
        if(x%i==0)
        {
            printf("%d is a factor of %d\n",i,x);
        }
    }

    return 0;
}

