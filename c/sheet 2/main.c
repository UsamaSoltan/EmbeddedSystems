#include <stdio.h>
#include <stdlib.h>

int main()
{while(1)
{
    float radius ,area=00.00, circumference=00.00;
    printf("enter your radius= \n");
    scanf("%f",&radius);
    if(radius<0)
    {
      printf("error  \n");
    }
    else{
        area=3.14*radius*radius;
        circumference=2*3.14*radius;

    }
    printf("area of cyrcel = %f \n",area);
    printf("area of circumference = %f \n",circumference);
}
    return 0;
}
