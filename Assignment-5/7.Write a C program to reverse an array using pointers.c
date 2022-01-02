//reverse an array using pointers
#include <stdio.h>
int main()
{
    int n,*ptr;
    printf("enter the number of elements to input:");
    scanf("%d",&n);
    int arr[n];
    ptr=arr;
    printf("Enter array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("The array in reverse order is\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",*(ptr+i));
    }

}
