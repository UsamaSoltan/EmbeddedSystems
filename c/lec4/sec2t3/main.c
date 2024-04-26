#include <stdio.h>
#include <stdlib.h>

int main()
{
      int x,y=0,z,sum;
    printf("please enter num of com\n");
    scanf("%d",&x);
    for(y;y<x;y++)
    {
         printf("please enter nums\n");

         scanf("%d",&z);
         sum+=z;
         }
         printf("sum is=%d",sum);
    printf("\nbye\n");
    return 0;
}
