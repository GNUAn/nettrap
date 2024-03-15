#include <string.h>
#include "connect.c"
#include <stdio.h>
void bridge(int);
void bridge(int money)
{
  printf("Area: Bridge\n");
  char adr[512];
  for (;;)
    {
      fgets(adr, 511, stdin);
      adr[strlen(adr) - 1] = '\0';
      
      if (strcmp(adr, "exit") == 0)
	{
	  printf("Thanks for playing nettrap! Hope you like it!\n");
	  FILE *f = fopen("credits.txt", "r");
	  int c;
	  while ((c = fgetc(f)) != EOF)
	    putchar(c);
	  break;
	}
      if (strcmp(adr, "list") == 0)
	{
	  printf("shop, exit, list\n");
	}
      else
	connect(adr);
      
      printf("Last input:%s\n", adr);
    }
}
