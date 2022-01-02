//swap first and last
#include <stdio.h>

int main()
{
    int x,y,n;
    printf("enter the size of the digit:");
    scanf("%d",&x);
    printf("enter the digit:");
    scanf("%d",&y);
    int a[x],b[x];
    
    for(int i=0;i<x;i++)
    {
        n=y%10;
        a[i]=n;
        y=y/10;
    }
    
    b[0]=a[0];
    b[x-1]=a[x-1];
    
    for(int i=1;i<x-1;i++)
    {
        b[i]=a[x-i-1];
    }
    
    printf("The swapped number:\n");
    for(int i=0;i<x;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}

