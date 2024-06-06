#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int num, digits,sum=0,y=10,x;
   printf("enter number of digits = ");
   scanf("%d",&digits);
    printf("enter number = ");
   scanf("%d",&num);
   for(int i=0;i<digits;i++)
   {
       x=num%y;
       num=num/y;
       sum+=x;
   }
    printf("sum the digits is = %d",sum);
    return 0;
}
