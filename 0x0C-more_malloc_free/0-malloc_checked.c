#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the memory
 * Return: pointer to the address of the memory
 */

void *malloc_checked(unsigned int b)
{
  void *ptr;
  ptr = malloc(b);
  if (ptr == NULL)
    {
      exit(98);
    }
  return (ptr);
}
