//sum of even odd using recursion
#include <stdio.h>

int evenodd();
int sumeven=0, sumodd=0;
int main()
{
    int n;
    printf("enter the limit:");
    scanf("%d",&n);
    evenodd(1,n);
    
    printf("the sum of even numbers:%d\n",sumeven);
    printf("the sum of odd numbers:%d\n",sumodd);
    
    return 0;
}

int evenodd(int x,int n)
{
    if(x<=n)
    {
       if(x%2==0)
       {
           sumeven+=x;
       }
       else
       {
           sumodd+=x;
       }
       
       evenodd(++x,n);
    }
    
    return sumeven,sumodd;
    
}


