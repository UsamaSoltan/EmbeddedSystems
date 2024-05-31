#include <stdio.h>
#include <stdlib.h>

int main()
{unsigned char rows,y=0,col;
while(1)
{
    printf("num_of_rows = ");
scanf("%d",&rows);
col=rows;
   for(int i=0;i<rows;i++){

    for(int j=0;j<=i;j++){
         printf("*");
    }
        printf("\n");

   }
   printf("---------------------------------------\n");
   for(int i=0;i<rows;i++){

    for(int j=0;j<(col);j++){
         printf("*");
    }
        printf("\n");
col--;
   }
      printf("---------------------------------------\n");
 for (int i=1; i<=rows;i++) {
        for (int j=1; j<=rows-i;j++) {
            printf(" ");
        }

        for (int j=1;j<=2*i-1;j++) {
            printf("*");
        }

        printf("\n");
}}
    return 0;
}
