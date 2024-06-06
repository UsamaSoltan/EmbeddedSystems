#include <stdio.h>
#include <stdlib.h>

int main(){
 int num, digit, total_holes = 0;

  printf("Enter a positive integer = ");
  scanf("%d",&num);

  if (num <= 0) {
    printf(" Please enter a positive integer\n");
    return 1;
  }

  while (num > 0) {
    digit = num % 10;
    num /= 10;
    switch (digit) {
      case 0: case 4:case 6:case 9:
        total_holes++;
        break;
      case 8:
        total_holes += 2;
        break;
    }
  }

  printf("Total number of holes is %d\n", total_holes);

  return 0;
}
