#include <stdio.h>
#include <stdlib.h>

int main()
{unsigned int num,i,y,x=0;
    printf("enter your number\n");
    scanf("%d",&num);
    for(int i=31;i>=0;i--)
    {
        y=((num>>i)&1); printf("%d",y);
        if(y==1)
        {
          for(int j=0;j<32;j++)
          {
             y=((num<<j)&1); printf("%d",y);
             if(y==0)
                x++;
             else

             num=num<<31;
             i=0;
          }
        }printf("%d/n",x);

    }
    return 0;
}
