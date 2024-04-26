#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x,y,z;
   printf("please enter num1 \n");
   scanf("%d",&x);
   printf("please enter num2 \n");
   scanf("%d",&y);
   printf("please enter num3 \n");
   scanf("%d",&z);
   if(x>y&&x>z)
   {
     printf(" num1 is max \n");
   }
   else if(y>x&&y>z)
   {
       printf(" num2 is max\n");

   }
   else if(x>z&&x>y)
   {
        printf(" num3 is max \n");
   }
   else
     printf(" nums are equal \n");
    printf("bye\n");
    return 0;
}
