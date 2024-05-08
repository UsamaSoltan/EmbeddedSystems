#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1){
        int num,flag=0,i;

    printf("enter you check number \n");
   scanf("%d",&num) ;
   if(num>0)
   {
       for( i=1;i<=num;i++){
        if(num==i*i)
        {
        flag=1;
             break;

        }
         else
            {
               flag=0;
         }

    }
    if( flag==1)
        {
            printf("squard \n");
              printf("%d \n",i);
        }
    else
         printf("not squard \n");

       }
   else
    printf("error\n");
    }
    return 0;
}
