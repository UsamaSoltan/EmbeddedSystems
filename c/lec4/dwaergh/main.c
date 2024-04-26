#include <stdio.h>
#include <stdlib.h>

int main()
{ for(;;)
{
      int x,y,z;
       double c, a,b;
    printf("please enter num1\n");
    scanf("%d",&x);
     printf("please enter num2\n");
    scanf("%d",&y);
    if(y==0){
        printf("error\n");
    }
    else
    {
  z=x/y;
  a=(float)x/y;
  b=a-(float)z;
 c=b*y;
   printf("x%y= %f\n",c);
   }

}
    return 0;
}
