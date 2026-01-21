#include "kernel/types.h"
#include "user/user.h"

int
main(void)
{
  write(1, "\033[H\033[2J\033[3J", 11);
  exit(0);
}
