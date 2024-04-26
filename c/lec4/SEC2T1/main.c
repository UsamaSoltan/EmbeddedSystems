#include <stdio.h>
#include <stdlib.h>

int main()
{ int n1,n2,x,sum=0;
     printf("enter n1\n");
     scanf("%d",&n1);
      printf("enter n2\n");
     scanf("%d",&n2);
     if(n1>n2)
     {
         x=n1;
         for(x=x-1;x>n2;x--)
         {
              printf("%d\n",x);

              sum=x;
         }
     }
     else
     {
         x=n2;
         for(x=x-1;x>n1;x--)
         {
              printf("%d\n",x);
               sum=x+sum;
         }
     }
     printf("the sum of numbers are=%d\n",sum);
    return 0;

}
