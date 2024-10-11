// 平均数

#include <stdio.h>

int main() {
// get value
  int n;
  int numberList[100];
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &numberList[i]);
  }

// processing logic
  int sum = 0;
  for(int i = 0; i <= n; i++) {
    sum += numberList[i];
  }
  double average = (double)sum / (double)n;

// print result
  printf("%.2lf", average);

  return 0;
}