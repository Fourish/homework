// 整数简单运算

#include <stdio.h>

int main() {
// get value
  int num1, num2;
  scanf("%d %d", &num1, &num2);

// processing logic
  int sum        = num1 + num2;
  int difference = num1 - num2;
  int product    = num1 * num2;
  int quotient   = num1 / num2;

// print result
  printf("%d\n", sum);
  printf("%d\n", difference);
  printf("%d\n", product);
  printf("%d\n", quotient);

  return 0;
}