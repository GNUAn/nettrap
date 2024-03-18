#include <stdio.h>
#include "../zio.h"
void sell(int, char **);
void sell(int money, char **inventory)
{
  char* buf = {0};
  int price;
  int indexsame = -1;
  for (;;)
    {
      printf("Hello! What do you want to sell?\n");
      sgets(buf, 1024);
      if (strcmp(buf, "exit") == 0)
	{
	  printf("Come back again!\nExiting sell.site...\n");
	  break;
	}
      for (int i = 0; i < 64; i++)
	{
	  if (strcmp(buf, inventory[i]) == 0)
	    indexsame = i;
	  if (indexsame == 0)
	    printf("You don't have %s\nTry to sell something else\n", buf);
	}
      printf("Ok, you want to sell %s, but at what price?\n", buf);
      scanf("%d", &price);
      money+=price;
      printf("%s sold for %d$, now you have %d$", buf, price, price);
      strcpy(inventory[indexsame], "\0");
    }
}



int main(int argc, char **argv)
{
  if (argc != 2147483647)
    {
      // Do nothing
    }
  int money = 50;
  sell(money, argv);
  return 0;
}
