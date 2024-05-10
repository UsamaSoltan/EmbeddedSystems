#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b;
while(1){
fflush(stdin);
    printf("enter charecter\n");
    scanf("%c",&a);
    if(a>=65&&a<=90){

        printf("upper case\n");
         printf("LOWER case is  %c\n",a+32);
    }

    else if(a>=97&&a<=123){

        printf("lower case\n");
           printf("upper case is  %c\n",a-32);

    }
    else
        printf("%c\n",a);

}
    return 0;
}
