//swap two arrays using pointers
#include <stdio.h>

int main()
{
    int *ptr,*p,*c,n,i;
    printf("enter the limit of array:");
    scanf("%d",&n);
    int arr[n],brr[n],crr[n];
    ptr=arr;
    p=brr;
    c=crr;
    for(i=0;i<n;i++)  //first array
    {
        printf("enter the value:\n");
        scanf("%d",(ptr+i));
    }
    printf("the value of first array before swap :\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
    
    for(i=0;i<n;i++)  //second array
    {
        printf("enter the value:\n");
        scanf("%d",(p+i));
    }
    printf("the value of second array before swap :\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");
    
    for(i=0;i<n;i++) 
    {
        crr[i]=*(p+i);
    }
  
    for(i=0;i<n;i++)
    {
        brr[i]=*(ptr+i);
    }
    for(i=0;i<n;i++)
    {
        arr[i]=*(c+i);
    }
    
    printf("the value of first array after swap :\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
    
    printf("the value of second array after swap:\n");
    
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    
    return 0;
}



