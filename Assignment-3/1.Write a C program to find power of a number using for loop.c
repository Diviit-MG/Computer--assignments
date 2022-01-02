//find power using for loop
#include <stdio.h>

int main()
{
    int x,y,power=1;
    printf("enter the number:");
    scanf("%d",&x);
    printf("enter the power to be found:");
    scanf("%d",&y);
    
    for(int i=0;i<y;i++)
    {
        power=power*x;
    }
    
    printf("%d raised to power %d is %d",x,y,power);

    return 0;
}


