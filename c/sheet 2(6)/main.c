#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,y;
    printf("\n enter your number \n");
    scanf("%d",&num);
   for(int i=7;i>=0;i--)
{
    y=((num>>i)&1); // read bit

}

/*for(int i=0;i<7;i++)
{
    y=((num>>i)&1); // read bit10001010/
printf("%d",y);
}
num=y;
printf("%d",num);
    return 0;
}
