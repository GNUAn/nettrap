#include <stdio.h>
#include <string.h>
void sell(int, char **);
void sell(int money, char **inventory)
{
  char* buf = {0};
  int price;
  int indexsame = -1;
  for (;;)
    {
      printf("Hello! What do you want to sell?\n");
      fgets(buf, 1024, stdin);
      buf[strlen(buf) - 1] = '\0';
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
