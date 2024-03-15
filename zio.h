#include <stdio.h>
#include <string.h>
char *asgets(char *str);
char *sgets(char *str, int count);
char *sgets(char *str, int count)
{
  fgets(str, count, stdin);
  str[strlen(str)-1] = '\0';
  return str;
}
      
char *asgets(char *str)
{
  int count = sizeof(str);
  sgets(str, count);
  return str;
}
