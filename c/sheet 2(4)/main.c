#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int y, num,x=0;
while(1)
{
    x=0;
        printf("enter your number \n");
    scanf("%d",&num);
    for(int i=0;i<32;i++)
    {
      y=((num>>i)&1);printf("%d",y);
        if(y==1)
            x++;
       }

printf("%d\n",x);

}
    return 0;
}
