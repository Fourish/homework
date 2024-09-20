// 温度转换

#include <stdio.h>

int main() {
// get value
  int celsius;
  scanf("%d", &celsius);

// processing logic
  double fahrenheit = ((double)celsius * (9.0f / 5.0f)) + 32.0f;

// print result
  printf("%.2lf", fahrenheit);

  return 0;
}