#include "zio.h"
#include <stdio.h>
int main()
{
  char str[256];
  sgets(str, 255);
  puts(str);
  asgets(str);
  puts(str);
  return 0;
}
