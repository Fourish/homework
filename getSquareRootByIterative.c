// 迭代法求平方根

#include <stdio.h>

int main() {
// get value
  double a = 0.0f;
  scanf("%lf", &a);

// processing logic
  double resultAfter = a;
  double result = a;
  do {
    resultAfter = result;
    result = 0.5f * (result + (a / result));
  } while(resultAfter - result >= 0.00001f);

// print result
  printf("%.5lf", result);

  return 0;
}
