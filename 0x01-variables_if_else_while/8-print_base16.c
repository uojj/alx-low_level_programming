#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - Entry point
 *
 *
 */

int main(void)
  
{
  char i;
  char j;
      
  for (i = '0'; i <= '9'; i++)
    {
      putchar(i);
    }
  for (j = 'a'; j <= 'f'; j++)
    {
      putchar(j);
    }
  putchar('\n');
  return (0);
}
