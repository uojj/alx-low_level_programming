#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: pointer where we search for character
 * @accept: character we search for
 * Return: NULL if character is not found, return pointer
 */

char *_strpbrk(char *s, char *accept)

{
  int j;
   
  while (*s != '\0')
    {
      j = 0;

      while (accept[j] != '\0')
	
	{
	  if (*s == accept[j])
	    {
	      return (s);
	    }
	  j++;
	}
      s++;
    }
  return (0);
}
