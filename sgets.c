#include "zio.h"
#include <stdio.h>
void sgets(char *str)
{
  fgets(str, sizeof(str)-1, stdin);
  str[strlen(str)-1] = '\0';
  return;
}
