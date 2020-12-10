#include <stdio.h>
#include <string.h>

int main(void)
{
  char name[100];
  int width;

  printf("Input your name");
  scanf("%s", name);
  width = strlen(name) + 13;
  printf("%*s\n", width, name);
  return 0;
}