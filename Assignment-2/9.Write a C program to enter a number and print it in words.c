//number in name
#include <stdio.h>

int main()
{
    int s,n,x;
    printf("enter the size of the number:");
    scanf("%d",&s);
    printf("enter the number:");
    scanf("%d",&n);
    int a[s],b[s];
    
    for(int i=0;i<s;i++)
    {
        x=n%10;
        a[i]=x;
        n=n/10;
    }
    
    for(int i=0;i<s;i++)
    {
        b[i]=a[s-i-1];
    }
    
    for(int i=0;i<s;i++)
    {
        switch(b[i])
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
    }

    return 0;
}

