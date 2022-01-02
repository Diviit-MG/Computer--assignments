//even and odd printing using recursion
#include <stdio.h>

int evenodd();
int main()
{
    int n;
    printf("enter the limit:");
    scanf("%d",&n);
    evenodd(1,n);
    return 0;
}

int evenodd(int x,int n)
{
    if(x<=n)
    {
       if(x%2==0)
       {
           printf("%d\n",x);
       }
       else
       {
           printf("%d\t",x);
       }
       
       evenodd(++x,n);
    }
    
    
}



