#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int num, digits,sum=0,x;
   printf("enter number of digits = ");
   scanf("%d",&digits);
    printf("enter number = ");
   scanf("%d",&num);
   for(int i=0;i<digits;i++)
   {
       x=num%10;
       num=num/10;
       sum+=x;
   }
    printf("sum the digits is = %d",sum);
    return 0;
}
