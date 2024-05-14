#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int x,y=0,z,a,max,min;
    printf("please enter num of com\n");
    scanf("%d",&x);
    for(y;y<x;y++)
    {
         printf("please enter nums\n");

         scanf("%d",&z);
         if(y==0)
         {
             min=z;
             max=z;
         }
        if(z>max)
        {
            max=z;
        }
        else if(z<min)
            min=z;
    }
    printf("max=%d\n",max);

    printf("min=%d\n",min);
    return 0;
}
