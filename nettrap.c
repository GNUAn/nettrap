#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "zio.h"
#include "addr/shop.c"
#include "addr/sell.c"
void bridge(int, char**);
void bridge(int money, char **inventory)
{
  printf("Area: Bridge\n");
  char adr[512];
  for (;;)
    {
      sgets(adr, 511);
      if (strcmp(adr, "exit") == 0)
	{
	  printf("Thanks for playing nettrap! Hope you like it!\n");
	  break;
	}
      if (strcmp(adr, "shop") == 0)
	shop(money, inventory);
      else if (strcmp(adr, "sell") == 0)
	{
	  sell(money, inventory);
	}
      else if (strcmp(adr, "list") == 0)
	  printf("shop, exit, list\n");
      printf("Last input:%s\n", adr);
    }
}

int main(void)
{
  printf("\t\tStory\n\
	 \n\n\
	 It was a typical day, you opened browser,\watched some\n\
	 videos, but then, everything dissapeared and you were sucked\n\
	 into computer. You opened your eyes and saw, that you're in the WWW\n\
        ");
  sleep(7);
  system("clear");
  int money = 75;
  char **inventory;
  for (int i = 0; i < 64; i++)
    {
      for (int j = 0; j < 64; j++)
	inventory = '\0';
    }
  printf("\
      nettrap  Copyright (C) 2024  AnatoliyL\n\
    This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.\n\
    This is free software, and you are welcome to redistribute it\n\
    under certain conditions; type `show c' for details.\n");

  bridge(money, inventory);
  return 0;
}
