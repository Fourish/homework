#include <stdio.h>

int main() {
// get value
  int start, end;
  scanf("%d %d", &start, &end);

// processing logic
  for(int currentNum = start; currentNum <= end; currentNum++) {
    if(currentNum == 1) {
      continue;
    }

    int tempSum = 1;
    for(int i = 2; i <= currentNum; i++) {
      if(currentNum % i == 0 && i != currentNum) {
        tempSum += i;
      }
    }

    if(tempSum == currentNum) {
      printf("%d\n", currentNum);
    }

    tempSum = 0;
  }

  return 0;
}
