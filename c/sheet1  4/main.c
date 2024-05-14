#include <stdio.h>
#include <stdlib.h>

int main()
{while(1){
       int x,y=0,z,a=0;
    printf("please enter num1\n");
    scanf("%d",&x);
     printf("please enter num2\n");
    scanf("%d",&z);

    for(y;y<x;y++)
    {
a+=z;
         }
         printf("x*z=%d\n",a);
    printf("bye\n");

}
    return 0;
}
