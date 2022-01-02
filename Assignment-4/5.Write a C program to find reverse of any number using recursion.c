//reverse a number using recursion
#include <stdio.h>

int reverse(int);
int s;
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    reverse(n);
    
    printf("the reverse of number %d is %d",n,s);
    return 0;
}

int reverse(int n)
{
    int x;
    
    if(n!=0)
    {
       x=n%10;
       s=s*10+x;
       reverse(n/10);
    }
    else
    {
        return s;
    }
    
}

