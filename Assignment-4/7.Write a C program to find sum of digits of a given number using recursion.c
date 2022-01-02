//sum of digits using recursion
#include <stdio.h>

int sum(int);
int s;
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    sum(n);
    
    printf("the sum of digits of the number %d is %d",n,s);
    return 0;
}

int sum(int n)
{
    int x;
    
    if(n!=0)
    {
       x=n%10;
       s=s+x;
       sum(n/10);
    }
    else
    {
        return s;
    }
    
}

