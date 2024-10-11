// 角谷定理

#include <stdio.h>

int main() {
// get value
  int n;
  scanf("%d", &n);

// processing logic
  int count = 0;
  while(n != 1) {
    if(n & 1) {
      n = 3 * n + 1;
    } else {
      n /= 2;
    }
    count++;
  }

// print result
  printf("%d", count);

  return 0;
}