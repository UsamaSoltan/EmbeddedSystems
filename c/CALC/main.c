#include <stdio.h>
#include <stdlib.h>

int main()
{
     float x,y;
     int z;
    while(1){

printf("enter num-1\n");
scanf("%f",&x);
printf("enter num-2\n");
scanf("%f",&y);
printf("which type of sympol\n");
printf("1- +\n");
printf("2- -\n");
printf("3- *\n");
printf("4- / \n");
printf("5- % \n");
scanf("%d",&z);
    switch(z){
case 1:
    printf("x+y=%f\n",x+y);
    break;
    case 2:
    printf("x-y=%f\n",x-y);
    break;
    case 3:
    printf("x*y=%f\n",x*y);
    break;
    case 4:
        if(y==0){
            printf("error");
        }
        else{
             printf("x/y=%f\n",x/y);
    break;
        }

    case 5:
   if(y==0){
            printf("error");
        }
        else{
             printf("x%y=%f\n",(int)x%(int)y);
    break;
        }

    }
    }

    return 0;
}
