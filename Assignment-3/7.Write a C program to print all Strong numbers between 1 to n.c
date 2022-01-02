//strong numbers 1 to n
#include <stdio.h>

int main()
{
    int y,n,tempnum,fact,sum,arr[100],count;
    printf("enter the limit:");
    scanf("%d",&n);
    
    for(int i=1;i<n;i++)
    {
        tempnum=i;
        count=0;
        while(tempnum!=0)
        {
            tempnum=tempnum/10;
            count+=1;
        }
        
        tempnum=i;
        for(int i=0;i<count;i++)
        {
            arr[i]=tempnum%10;
            tempnum/=10;
            if(tempnum==0)
            {
                break;
            }
        }
        
        sum=0;
        for(int i=0;i<count;i++)
        {
            y=arr[i];
            fact=1;
            for(int j=1;j<=y;j++)
            {
                fact=fact*j;   
            }
            sum=sum+fact;
        }
        
        tempnum=i;
        if(tempnum==sum)
        {
            printf("The number %d is a strong number\n",i);
        }
    }

    return 0;
}


