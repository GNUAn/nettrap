#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
void connect(char *addr, int exp);
void connect(char *addr, int exp)
{
  char arg[255];
  sprintf(str, "%d", exp);
  pid_t pid = fork();
  if (fork == 0)
    execvp(addr, arg);
  else if (fork == -1)
    return fork;
  else
    waitpid(-1, &status, 0);
  return;
}
