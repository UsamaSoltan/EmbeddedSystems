#include <stdio.h>
#include <stdlib.h>

int main()
{
while(1){

        int num;
unsigned char character;

    printf("enter your number= \n");
    scanf("%d",&num);
    fflush(stdin);
    printf("enter your character= \n");
    scanf("%c",&character);
    if(num%2==0)
    {
        printf("the number is even\n");
         printf("the character is %c\n",character);
    }
    else
        {
         printf("the number is odd\n");
         character^=(1<<5);
         printf("the character is %d\n",character);
          printf("the character is %c\n",character);
    }
}
    return 0;
}
