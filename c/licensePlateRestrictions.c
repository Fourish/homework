// 车辆限行

#include <stdio.h>
#include <string.h>

int main() {
// get value
  int dayOfTheWeek, hazeIndex;
  char licensePlateNumber[7];
  scanf("%d%d%s", &dayOfTheWeek, &hazeIndex, &licensePlateNumber[0]);

// processing logic
  char tailNumber = licensePlateNumber[strlen(licensePlateNumber) - 1];

  if(dayOfTheWeek == 6 || dayOfTheWeek == 7 || hazeIndex < 200) {
    goto UNLIMIT;
  }

  if(hazeIndex >= 200 && hazeIndex < 400) {
    if(dayOfTheWeek == 1 && (tailNumber == '1' || tailNumber == '6')) {
      goto LIMIT;
    }
    if(dayOfTheWeek == 2 && (tailNumber == '2' || tailNumber == '7')) {
      goto LIMIT;
    }
    if(dayOfTheWeek == 3 && (tailNumber == '3' || tailNumber == '8')) {
      goto LIMIT;
    }
    if(dayOfTheWeek == 4 && (tailNumber == '4' || tailNumber == '9')) {
      goto LIMIT;
    }
    if(dayOfTheWeek == 5 && (tailNumber == '5' || tailNumber == '0')) {
      goto LIMIT;
    }
    goto UNLIMIT;
  }

  if(hazeIndex >= 400) {
    if((dayOfTheWeek == 1 || dayOfTheWeek == 3 || dayOfTheWeek == 5)&& (tailNumber == '1' || tailNumber == '3' || tailNumber == '5' || tailNumber == '7' || tailNumber == '9')) {
      goto LIMIT;
    }
    if((dayOfTheWeek == 2 || dayOfTheWeek == 4)&& (tailNumber == '0' || tailNumber == '2' || tailNumber == '4' || tailNumber == '6' || tailNumber == '8')) {
      goto LIMIT;
    }
    goto UNLIMIT;
  }

// print result
  LIMIT:
  printf("%c yes", tailNumber);
  goto END;

  UNLIMIT:
  printf("%c no", tailNumber);
  goto END;

  END:
  return 0;
}