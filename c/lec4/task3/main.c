#include <stdio.h>
#include <stdlib.h>

int main()
{
     unsigned int grade;
     printf("please enter number of grade \n");
   scanf("%d",&grade);
   if(grade<50)
   {
      printf("your grade is 'F'\n");
   }
   else if(grade>=50||grade<60)
   {
        printf("your grade is 'D'\n");
   }
    else if(grade>=60||grade<70)
        {
        printf("your grade is 'c'\n");
   }
     else if(grade>=70||grade<80)
        {
        printf("your grade is 'B'\n");
   }
   else
    printf("your grade is 'A'\n");
    printf("bye\n");
    return 0;
}
