#include <stdio.h>
#include <stdlib.h>

int main()
{
     int z,x,bit,y;
    while(1){

printf("enter num\n");
scanf("%d",&x);
printf("which type of you need\n");
printf(" 1-Set bit.\n");
printf("2-Clear bit\n");
printf("3-Toggle bit.\n");
printf("4-Read bit.\n");

scanf("%d",&z);
    switch(z){
case 1:

             printf("what is the bit you want to set =");
    scanf("%d",&bit);
        x|=(1<<bit);
    printf("%d\n",x);
    break;
    case 2:
         printf("what is the bit you want to reset =");
    scanf("%d",&bit);
        x&=~(1<<bit);
    printf("%d\n",x);
    break;
    case 3:
printf("what is the bit you want to toggle =");
    scanf("%d",&bit);
        x^=(1<<bit);
printf("%d\n",x);
    break;
    case 4:
        printf("what is the bit you want to read =");
    scanf("%d",&bit);
       y=((x>>bit)&1);

printf("%d",y);
    break;
    }
    }

    return 0;
}
