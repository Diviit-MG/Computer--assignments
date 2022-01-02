//strong number
#include <stdio.h>

int main()
{
    int x,y,n,tempnum,fact,sum,arr[100];
    printf("enter the size of the number:");
    scanf("%d",&n);
    printf("enter the number:");
    scanf("%d",&x);
    tempnum=x;
    
    for(int i=0;i<n;i++)
    {
        arr[i]=tempnum%10;
        tempnum/=10;
        if(tempnum==0)
        {
            break;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        y=arr[i];
        fact=1;
        for(int j=1;j<=y;j++)
        {
            fact=fact*j;   
        }
        sum=sum+fact;
    }
    
    if(x==sum)
    {
        printf("The number %d is a strong number:",x);
    }
    else
    {
        printf("The number %d is not a strong number:",x);
    }
    

    return 0;
}


