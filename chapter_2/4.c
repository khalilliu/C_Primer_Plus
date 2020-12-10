#include <stdio.h>
void jolly(void);
void deny(void);

int main(void)
{
  jolly();
  jolly();
  deny();
}

void jolly(void)
{
  printf("For he is a jolly food\n");
}

void deny(void)
{
  printf("Which nobody can deny!\n");
}