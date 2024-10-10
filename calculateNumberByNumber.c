// 计算整数各位数字之和

#include <stdio.h>
#include <string.h>

int main() {
// get value
  char number[10];
  scanf("%s", &number[0]);

// processing logic
  int res = 0;
  for(int i = 0; i <= strlen(number) - 1; i++) {
    res += number[i] - '0';
  }

// print result
  printf("%d", res);

  return 0;
}