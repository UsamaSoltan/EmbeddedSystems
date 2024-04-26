#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,x;
     printf("enter n1\n");
     scanf("%d",&n1);
      printf("enter n2\n");
     scanf("%d",&n2);
     if(n1>n2)
     {
         x=n1;
         for(x-1;x>n2-1;x=x-1)
         {
              printf("%d\n",x);
         }
     }
     else
     {
         x=n2;
         for(x-1;x>n1-1;x=x-1)
         {
              printf("%d\n",x);
         }
     }
    return 0;
}
