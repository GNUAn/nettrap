#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void shop(int);
void ask(void);

void shop(int money)
{
  printf("Loading Gshop...\n");
  sleep(5);
  printf("Welcome to Gshop v0.0.1!\n");
  char buf[128];
  fgets(buf, 127, stdin);
  buf[strlen(buf)-1] = '\0';
  for (;;)
    {
      fgets(buf, 127, stdin);
      buf[strlen(buf)-1] = '\0';
      printf("Gshop 0.0.1 loading... User input: %s\n", buf);
      if (strcmp(buf, "list") == 0)
        {
	  printf("List of things that you can buy in this shop:\n\n");
	  printf("1. C language learning book $15\t2. Notebook(not computer) $20\n");
	  printf("3. 500 coins $10\t4. FastConnect $10\t5. HyperfastConnect $30\n");
	  printf("Select one of these to buy it\n");
        }
      if (strcmp(buf, "1") == 0 && money >= 15)
	{
	  ask();
	  money-=15;
	}
      if (strcmp(buf, "2") == 0 && money >= 20)
	{
	  ask();
	  money-=20;
	}
      if (strcmp(buf, "3") == 0 && money >= 50)
	{
	  ask();
	  money-=10;
	  printf("SCAM!\n");
	}
      if (strcmp(buf, "4") == 0 && money >= 10)
	{
	  ask();
	  money-=10;
	}
      if (strcmp(buf, "5") == 0 && money >= 30)
	{
	  ask();
	  money-=30;
	}
      if (money < 10)
	{
	  printf("You don't have enough money!\nTry to get some more and go back here\n");
	  break;
	}
      if (strcmp(buf, "exit") == 0)
	{
	  return;
	}
    }
}
void ask(void)
{
  printf("Are you sure?\n");
  getchar();
}
int main(int argc, char **argv)
{
  shop(atoi(argv[1]));
  return 0;
}
