#include <stdio.h>

int main()
{
    int a;
    printf("The even number from 1-100:\n");
    for(a=1;a<101;a++)
    {
        if(a%2==0)
        {
            printf("%d,",a);
        }
    }

    return 0;
}

