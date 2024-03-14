#include <stdio.h>
#include "bridge.c"
int main()
{
  FILE *f = fopen("startstory.txt", "r");
  int c;
  while ((c = fgetc(f)) != EOF)
    {
      putchar(c);
    }
  int money = 75;
  bridge(money);
  return 0;
}
