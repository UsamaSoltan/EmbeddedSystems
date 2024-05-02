#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {

    int num,factorial=1;
    printf("enter num= ");
    scanf("%d",&num);
    if(num>=0){
      while(num>=1)
   {
        factorial=factorial*num;
        num--;
    }
        printf("factorial= %d\n",factorial);
    }

    else{  printf("error\n");}

}
}
