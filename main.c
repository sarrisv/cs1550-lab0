#include <stdio.h>
#include <stdlib.h>

#include "operations.h"

int main(int argc, char *argv[]) {
  if (argc != 3) {
    printf("Usage: %s <number1> <number2>\n", argv[0]);
    return 1;
  }

  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  printf("%d %d\n", a, b);
  printf("%d + %d = %d\n", a, b, add(a, b));
  printf("%d - %d = %d\n", a, b, subtract(a, b));
  printf("%d * %d = %d\n", a, b, multiply(a, b));
  printf("%d / %d = %f\n", a, b, divide(a, b));

  return 0;
}
