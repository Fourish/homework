// 字符输入输出

#include <stdio.h>
#include <ctype.h>



int main() {
// get value
  char inputStr[10];
  scanf("%9s", inputStr);

// processing logic
  char result[7];
  result[0] = tolower(inputStr[0]);
  result[1] = tolower(inputStr[2]);
  result[2] = tolower(inputStr[4]);
  result[3] = tolower(inputStr[6]);
  result[4] = tolower(inputStr[8]);
  result[5] = '!';
  result[6] = '\0';

// print result
  printf("%s", result);

  return 0;
}