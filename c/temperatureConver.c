// 温度转换

#include <stdio.h>

int main() {
// get value
  int fahrenheit;
  scanf("%d", &fahrenheit);

// processing logic
  double celsius = ((double)fahrenheit - 32.0f) * (5.0f / 9.0f);

// print result
  printf("%.2lf", celsius);

  return 0;
}