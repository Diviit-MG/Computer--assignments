//sum of natural number using recursion
#include <stdio.h>

int natural();
int sum=0;
int main()
{
    int n;
    printf("enter the limit:");
    scanf("%d",&n);
    natural(1,n);
    
    printf("the sum of natural numbers:%d",sum);
    return 0;
}

int natural(int x,int n)
{
    if(x<=n)
    {
        sum+=x;
        natural(++x,n);
        return sum;
    }
    
}



