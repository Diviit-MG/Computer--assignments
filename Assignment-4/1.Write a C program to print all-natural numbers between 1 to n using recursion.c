//natural number 1 to n using recursion
#include <stdio.h>

int natural();

int main()
{
    int n;
    printf("enter the limit:");
    scanf("%d",&n);
    natural(1,n);
    return 0;
}

int natural(int x,int n)
{
    if(x<=n)
    {
        printf("%d\n",x);
        natural(++x,n);
    }
    
}


