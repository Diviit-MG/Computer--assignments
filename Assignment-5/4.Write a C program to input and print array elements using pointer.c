// array using pointers
#include <stdio.h>

int main()
{
    int *ptr,n,i;
    printf("enter the limit of array:");
    scanf("%d",&n);
    int arr[n];
    ptr=arr;
    
    for(i=0;i<n;i++)
    {
        printf("enter the value:\n");
        scanf("%d",(ptr+i));
    }
    
    printf("the values stored in the array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",(*(ptr+i)));
    }
    

    return 0;
}




