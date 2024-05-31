#include <stdio.h>
#include <stdlib.h>

int main()
{
   while(1)
   {
        unsigned int x,x2,number,num,a=1,i,z=0,y=0;
    printf("enter your number = ");
    scanf("%d",&number);
num=number;
    for( i=0;i<32;i++)
    {
       x=number%10;
       number=number/10;
     a*=10;
       if(x==0)
break;
    }
a=a/100;
for( int l=0;l<=i;l++)
    {
       x2=num%10;
       num=num/10;
     z=a*x2;
        y=z+y;
       a= a/10;
    }
printf("%d\n",y);

y=0;
   }
    return 0;
}
