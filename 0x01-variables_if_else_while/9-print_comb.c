#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 *
 */

int main()

{
  int i;
  for (i = '0'; i <= '8'; i++)
    {
      putchar(i);
      putchar(',');
    }
  putchar('9');
  putchar('\n');
  return 0;
}
