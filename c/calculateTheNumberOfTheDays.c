// 计算某月天数

#include <stdio.h>

int main() {
// get value
  int year, month;
  scanf("%d%d", &year, &month);

// processing logic
  if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
    puts("31");
  } else if(month == 4 || month == 6 || month == 9 || month == 11) {
    puts("30");
  } else {
    if((year & 3) == 0) {
      puts("29");
    } else {
      puts("28");
    }
  }

  return 0;
}