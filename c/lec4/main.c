#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x,f,z;
   printf("please enter L1 \n");
   scanf("%d",&x);
   printf("please enter L2 \n");
   scanf("%d",&f);
   printf("please enter L3 \n");
   scanf("%d",&z);
   if((x+f)>z&&(x+z)>f&&(z+f)>x)
   {
        printf("  triangle \n");
   }
   else
     printf(" not triangle \n");
    return 0;
}
