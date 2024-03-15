#include <string.h>
#include <stdio.h>
#include "zio.h"
#include "addr/shop.c"
void bridge(int);
void bridge(int money)
{
  printf("Area: Bridge\n");
  char adr[512];
  for (;;)
    {
      sgets(adr, 511);
      if (strcmp(adr, "exit") == 0)
	{
	  printf("Thanks for playing nettrap! Hope you like it!\n");
	  FILE *f = fopen("credits.txt", "r");
	  int c;
	  while ((c = fgetc(f)) != EOF)
	    putchar(c);
	  break;
	}
      if (strcmp(adr, "shop") == 0)
	shop(money);
      if (strcmp(adr, "list") == 0)
	  printf("shop, exit, list\n");
      if (strcmp(adr, "exit") == 0)
	break;

      
      printf("Last input:%s\n", adr);
    }
}

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
