// nth term of fibonacci
#include <stdio.h>

int fibonacci(int);
int a=0,b=1,c;
int main()
{
    int n;
    printf("enter the limit:");
    scanf("%d",&n);
    fibonacci(n-2);
    
    printf("the %dth fibonacci term is %d",n,c);
}

int fibonacci(int n)
{
    if(n!=0)
    {
        c=a+b;
        a=b;
        b=c;
        fibonacci(n-1);
    }
    else
    {
        return c;
    }
    
}



