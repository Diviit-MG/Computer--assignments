//lcm using recursion
#include <stdio.h>

int hcf(int,int);

int main()
{
    int num1, num2,h;
    printf("Enter both the numbers\n");
    scanf("%d%d", &num1, &num2);
    h=hcf(num1,num2);
    printf("the lcm of two numbers is %d",(num1*num2)/h);
    return 0;
}
int hcf(int num1,int num2)
{
    if(num2!=0)
    {
        return hcf(num2, num1 % num2 );
    }
    else
    {
        return num1;
    }
}
