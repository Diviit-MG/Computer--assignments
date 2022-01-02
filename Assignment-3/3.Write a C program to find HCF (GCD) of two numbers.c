//find hcf
#include <stdio.h>

int main()
{
    int num1, num2,hcf=1;
    
    printf("Enter both the numbers\n");
    scanf("%d%d", &num1, &num2);
   
    for(int i=1;i<=num1 && i<=num2; i++)
    {
        if(num1%i==0 && num2%i == 0)
        {
            hcf = i;
        }
    }
    printf("The HCF Of %d and %d is %d", num1, num2, hcf);

    return 0;
}

