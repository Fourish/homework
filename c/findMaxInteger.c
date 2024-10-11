// 寻找最大整数

#include <stdio.h>

int main() {
// get value
  int num1, num2, num3, num4;
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

// processing logic
  int max = (num1 > num2 ? num1 : num2);
  max = (max > num3 ? max : num3);
  max = (max > num4 ? max : num4);

// print result
  printf("%d", max);

  return 0;
}