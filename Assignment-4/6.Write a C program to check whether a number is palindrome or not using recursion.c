//palindrome using recursion
#include <stdio.h>

int reverse(int);
int s;
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    reverse(n);
    
    if(n==s)
    {
        printf("the number %d is a palindrome",n);
    }
    else
    {
        printf("the number %d is not a palindrome",n);
    }
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

