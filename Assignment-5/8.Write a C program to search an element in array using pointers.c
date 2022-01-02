//search element using pointer
#include <stdio.h>

int main()
{
    int *ptr,n,i,x;
    printf("enter the limit of array:");
    scanf("%d",&n);
    int arr[n];
    ptr=arr;
    for(i=0;i<n;i++)
    {
        printf("enter the value:\n");
        scanf("%d",(ptr+i));
    }
    printf("\n");
    
    printf("enter the value of the number to be searched:");
    scanf("%d",&x);
    
    for(i=0;i<n;i++)
    {
        if((*(ptr+i))==x)
        {
            printf("the element you are looking is found at index %d\n",i);
        }
    }
    
    return 0;
}


