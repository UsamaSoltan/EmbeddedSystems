#include <stdio.h>
#include <stdlib.h>
int number_of_index(int*arr,int size,int num);
int main()
{int c,x;
printf( "enter your number search = ");
scanf("%d",&x);
   int array[5]={1,0,2,1,1};
  c=number_of_index(array,5,x);
  if(c==0){

   printf("The number not found in array");
  }
  else
   printf("The number of times a number appears in the array = %d\n",c) ;
    return 0;
}
