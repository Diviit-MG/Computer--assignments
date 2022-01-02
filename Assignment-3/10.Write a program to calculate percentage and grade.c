//grade and percentage
#include<stdio.h>

int main()
{  int phy,bio,maths,chem,comp,sum,a;
   printf("Enter the physics mark:");
   scanf("%d",&phy);
   printf("Enter the biology mark:");
   scanf("%d",&bio);
   printf("Enter the chemistry mark:");
   scanf("%d",&chem);
   printf("Enter the mathametics mark:");
   scanf("%d",&maths);
   printf("Enter the computer mark:");
   scanf("%d",&comp);
   
   sum=phy+bio+chem+maths+comp;
   a=sum/5;
   
   printf("The grade scored is:\n");
   
   switch(a)
   {
        case 90 ... 100 : printf("A");
                    break;
        case 80 ... 89 : printf("B");
                    break;
        case 70 ... 79 : printf("C");
                    break;
        case 60 ... 69 : printf("D");
                    break;
        case 40 ... 59 : printf("E");
                    break;
        case 0 ... 39 : printf("F");
                    break;
   }
   return 0;


}
