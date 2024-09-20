// 实数运算

#include <endian.h>
#include <stdio.h>

int main() {
// get value
  double length, width, height;
  scanf("%lf %lf %lf", &length, &width, &height);

// processing logic
  double volume = length * width * height;

// print result
  printf("%.3f", (float)volume);

  return 0;
}