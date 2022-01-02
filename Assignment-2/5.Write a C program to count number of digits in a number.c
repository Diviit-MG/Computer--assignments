#include <stdio.h>

int main()
{
    int x,count=0;
    printf("enter the digit:");
    scanf("%d",&x);
    
    while(x!=0)
    {
        x=x/10;
        count+=1;
    }
    
    printf("the number digits is %d",count);

    return 0;
}

