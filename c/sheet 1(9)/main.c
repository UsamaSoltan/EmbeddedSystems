#include <stdio.h>
#include <stdlib.h>


    int main() {
  int num;

  printf("Enter a positive integer: ");
  scanf("%d", &num);
  if (num<=0) {
    printf("%d is not a perfect square.\n", num);
    return 1;
  }

  int i=1;
  while (i*i<=num) {
    if (num%i==0&&num / i==i) {
      printf("%d is a perfect square.\n", num);
      return 0;
    }
    i++;
  }

  printf("%d is not a perfect square.\n", num);

  return 0;
    }
