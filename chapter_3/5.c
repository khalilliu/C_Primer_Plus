#include <stdio.h>

int main(void)
{
  float inch, cms;

  printf("Please input your height(inch):");
  scanf("%f", &inch);
  cms = inch * 2.54;
  printf("your height(cm): %f\n", cms);
  return 0;
}