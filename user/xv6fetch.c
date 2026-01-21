#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

/*
 * ANSI colors
 */
#define C_RESET  "\033[0m"
#define C_CYAN   "\033[1;36m"
#define C_PURPLE   "\033[0;35m"
#define C_WHITE  "\033[1;37m"
#define C_GRAY   "\033[1;30m"

int
main(void)
{
  int ticks = uptime();

  printf(C_CYAN
"                 ____    " C_PURPLE "    OS"C_RESET":     xv6-riscv\n"
C_CYAN"                /'___\\   " C_PURPLE "    Kernel"C_RESET": MIT 6.S081\n"
C_CYAN" __  _  __  __ /\\ \\__/   " C_PURPLE "    Arch"C_RESET":   riscv64\n"
C_CYAN"/\\ \\/'\\/\\ \\/\\ \\\\ \\  _``\\ " C_PURPLE "    Shell"C_RESET":  sh\n"
C_CYAN"\\/>  </\\ \\ \\_/ |\\ \\ \\L\\ \\" C_PURPLE "    Uptime"C_RESET": %d ticks\n"
C_CYAN" /\\_/\\_\\\\ \\___/  \\ \\____/" C_RESET
"\n"
C_CYAN" \\//\\/_/ \\/__/    \\/___/ \n"C_RESET
"\n",
  ticks);

  exit(0);
}
