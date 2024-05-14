#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        int y;
    float x,z;
    printf("please enter number\n");
    scanf("%f",&x);
    y=x;
    z=x-y;
    if(z>=0.5)
    {
       printf("%d\n",y+1);
    }
    else if (z<0.5)
    {
      printf("%d\n",y);
    }
    }
    return 0;
}
