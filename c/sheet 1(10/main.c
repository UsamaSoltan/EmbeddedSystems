#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;

  printf("Enter a positive integer: ");
  scanf("%d", &num);
  if (num<=0) {
    printf("%d is not a power of 2.\n", num);
    return 1;
  }
  if (num&(num-1)==0) {
    printf("%d is a power of 2.\n", num);
  } else {
    printf("%d is not a power of 2.\n", num);
  }

  return 0;
}
