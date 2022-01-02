//to find frequency of each digit
#include <stdio.h>

int main()
{
    int x,count;
    printf("enter the number elements of the array:");
    scanf("%d",&x);
    int arr[x];
    printf("Enter each digit of the number:\n");
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<x;i++)
    {
        count=0;
        for(int j=0;j<x;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                
            }
        }printf("the frequency of number %d is %d\n",arr[i],count);
    }
    
    
    return 0;

}

