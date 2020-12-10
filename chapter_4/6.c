#include <stdio.h>
#include <string.h>

int main(void)
{
  char firstname[40], lastname[40];
  int flen, llen;
  printf("Input your firstname: ");
  scanf("%s", firstname);
  printf("Input your lastname: ");
  scanf("%s", lastname);
  flen = strlen(firstname);
  llen = strlen(lastname);
  printf("%s %s\n", firstname, lastname);
  printf("%*d %*d\n", flen, flen, llen, llen);
  printf("%s %s\n", firstname, lastname);
  printf("%*d %*d\n",
         -flen, flen, -llen, llen);
}