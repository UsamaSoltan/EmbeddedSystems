#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x,y,z;
   printf("please enter L1 \n");
   scanf("%d",&x);
   printf("please enter L2 \n");
   scanf("%d",&y);
   printf("please enter L3 \n");
   scanf("%d",&z);
   if((x+y)>z&&(x+z)>y&&(z+y)>x)
   {
        printf("  triangle \n");
   }
   else
     printf(" not triangle \n");
    return 0;
}
