//access 2D array using pointers
#include <stdio.h>

int main()
{
    int x, y, *ptr1;
    printf("Enter the values of row:");
    scanf("%d",&x);
    printf("Enter the value of column:");
    scanf("%d",&y);
    int arr[x][y];
    

    
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            printf("enter the arr[%d][%d] element:",i,j);
            scanf("%d", (*(arr+i)+j));
        }
    }
    
    printf("The array:\n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("%d  ",*(*(arr+i)+j));
        }
        printf("\n");
    }
    

    return 0;
}
