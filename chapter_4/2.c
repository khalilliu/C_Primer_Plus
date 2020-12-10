#include <stdio.h>
#define MAX(a, b) ((a > b) ? (a) : (b))

int main(void)
{
  float a, b, max;
  printf("enter two num,i will give your the big one\n");
  scanf("%f %f", &a, &b);
  max = MAX(a, b);
  printf("%f is the big one", max);
  return 0;
}