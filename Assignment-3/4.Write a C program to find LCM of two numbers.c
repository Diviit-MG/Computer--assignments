// find lcm
#include <stdio.h>

int hcf(int a, int b)
{
    int hcf=1;
   
    for(int i=1;i<=a && i<=b; i++)
    {
        if(a%i==0 && b%i == 0)
        {
            hcf = i;
        }
    }

    return hcf;
}

int main()
{
    int x,y,lcm;
    
    printf("Enter both the numbers\n");
    scanf("%d%d",&x,&y);
    lcm=(x*y)/hcf(x,y);
    
    printf("the lcm of %d and %d is %d",x,y,lcm);
    
    return 0;
    
}

