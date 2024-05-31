#include <stdio.h>
#include <stdlib.h>

int main()
{
  unsigned char num,y=0,x=0,z=0;
          printf(" enter your number \n");
    scanf("%d",&num);
   for(int i=7;i>=0;i--)
{
    y=((num>>i)&1); // read bit
    printf(" %d",y);
    if(y==1)
        x|=(1<<z);
    else
        x&=~(1<<z);
    z=z+1;

}
printf("\n  %d\n",x);
 for(int i=7;i>=0;i--)
{
    y=((x>>i)&1);
     printf(" %d",y);
}


    return 0;
}
