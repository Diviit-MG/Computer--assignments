// add two matrices using pointers
#include <stdio.h>

int main()
{
    int x,y,i,j;
    printf("enter the number of rows:");
    scanf("%d",&x);
    printf("enter the number of columns:");
    scanf("%d",&y);
    int arr[x][y],brr[x][y];
    
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("enter the arr[%d][%d] element of first array:",i,j);
            scanf("%d",(*(arr+i)+j));
        }
    }
    printf("The first array:\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d  ",*(*(arr+i)+j));
        }printf("\n");
    }

    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("enter the arr[%d][%d] element of first array:",i,j);
            scanf("%d",(*(brr+i)+j));
        }
    }
    printf("The second array:\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d  ",*(*(brr+i)+j));
        }
        printf("\n");
    }
    
    printf("The sum of the arrays:\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            printf("%d  ",*(*(arr+i)+j)+*(*(brr+i)+j));
        }
        printf("\n");
    }
    

    return 0;
}

