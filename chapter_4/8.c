#include <stdio.h>
#define GALLON 3.758 //宏
#define MILE 1.609

int main(void)
{
  float gallon, mile;
  printf("Input miles and gallons: ");
  scanf("%f%f", &mile, &gallon);
  printf("Miles per gallon: %.1f\n", mile / gallon);
  printf("Litre per 100 kilometers: %.1f\n", gallon * GALLON / (mile * MILE) * 100);
  return 0;
}