//prime factors
#include <stdio.h>

int main()
{
    int x,prime;
    printf("enter the number:");
    scanf("%d",&x);
    
    printf("The prime factor of %d are:\n",x);
    
    for (int i=2;i<=x;i++)
    {
        if(x%i==0)
        {
            prime=1;
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    prime=0;
                    break;
                }
            }
            if(prime==1)
            {
                printf("%d,",i);
            }
            
        }
    }

    return 0;
}

