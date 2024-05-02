#include <stdio.h>
#include <stdlib.h>

int main()
{ int num,power,result=1;
    printf("enter nums\n");
    scanf("%d",&num);
     printf("enter power\n");
    scanf("%d",&power);
    for(int x=0;x<power;x++){
      result=result*num;
    }
    printf("resul is equal= %d\n",result);
    return 0;
}
