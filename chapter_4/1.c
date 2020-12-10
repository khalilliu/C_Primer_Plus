#include <stdio.h>
#include <string.h>

int main(void)
{
  char firstname[40], lastname[20];
  printf("Input your fistname:");
  scanf("%s", firstname);
  printf("Input your lastname: ");
  scanf("%s", lastname);
  strcat(firstname, lastname);
  printf("Your name is %s\n", firstname);
}