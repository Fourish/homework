// 电费

#include <stdio.h>

int main() {
// get value
  int powerCost;
  scanf("%d", &powerCost);

// processing logic
  double electricityCost = 0.0f;
  if(powerCost > 210) {
    electricityCost += (powerCost - 210.0f) * 0.7f;
    powerCost -= powerCost - 210;
  }
  if(powerCost > 110 && powerCost <= 210) {
    electricityCost += (powerCost - 110.0f) * 0.55f;
    powerCost -= powerCost - 110;
  }
  if(powerCost <= 110) {
    electricityCost += powerCost * 0.5f;
  }

// print result
  printf("%.2lf", electricityCost);

  return 0;
}