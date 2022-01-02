#include <stdio.h>

int main()
{
    int a,x,sum=0;
    printf("Enter the limit upto which summ of odd numbers to be found:");
    scanf("%d",&x);
    
    for(a=1;a<=x;a++)
    {
        if(a%2!=0)
        {
           sum+=a;
        }
    }
    
    printf("The sum of odd number from 1-%d is %d",x,sum);

    return 0;
}

