// 输出26个字母

#include <stdio.h>

int main() {
  for(int i = 0; i < 26; i++) {
    printf("%c", i + 'a');
      if(i < 25) {
        printf(" ");
      } else {
        printf("\n");
      }
  }

  for(int i = 25; i >= 0; i--) {
    printf("%c", i + 'a');
    if(i > 0) {
        printf(" ");
    }
  }

  return 0;
}