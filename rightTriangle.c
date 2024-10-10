// 直角三角形

#include <stdio.h>

int main() {
// get value
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

// processing logic
  if(a * a + b * b == c * c) {
    printf("%d", 2 * a * b);
  } else {
    puts("no");
  }

  return 0;
}