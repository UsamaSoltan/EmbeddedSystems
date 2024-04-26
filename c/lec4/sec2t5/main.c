#include <stdio.h>
#include <stdlib.h>

int main()
{
       int x,y,z;
       float a,b,c;
    printf("please enter num1\n");
    scanf("%d",&x);
     printf("please enter num2\n");
    scanf("%d",&y);
  z=x/y;
   printf("x%y= %d\n",z);
  a=(float)x/y;
   printf("x%y= %f\n",a);
  b=a-(float)z;
   printf("x%y= %f\n",b);
 c=b*(float)y;
   printf("x%y= %d\n",c);

    return 0;
}
