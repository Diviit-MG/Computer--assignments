//copy one array into another using pointers
#include <stdio.h>

int main()
{
    int *ptr,*p,n,i;
    printf("enter the limit of array:");
    scanf("%d",&n);
    int arr[n],brr[n];
    ptr=arr;
    p=brr;
    
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
    printf("\n");
    
    for(i=0;i<n;i++)
    {
        brr[i]=*(ptr+i);
    }
    printf("the value of second array :\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d ",(*(p+i)));
    }
    

    return 0;
}




