#include <stdio.h>
#include <stdlib.h>

int main()
{while(1)
{
    int num,y,found_one=0;
    printf("\n enter your number \n");
    scanf("%d",&num);
   for(int i=31;i>=0;i--)
{
    y=((num>>i)&1); // read bit
if (y == 1 || found_one) {
      printf("%d",y);
      found_one = 1;  // Set flag to indicate a 1 has been printed
    }
  }

  if (!found_one) {
    printf("0");
  }}
    return 0;
}
