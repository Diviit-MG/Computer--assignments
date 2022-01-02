#include <stdio.h>

int main()
{
    int x,last;
    printf("enter the digit:");
    scanf("%d",&x);
    
    last=x%10;
    
    while(x>=10)
    {
        x/=10;
    }
    
    printf("the first digit is:%d\n",x);
    printf("the last digit is:%d",last);
    
    return 0;
}

