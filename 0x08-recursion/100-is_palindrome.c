#include "main.h"

/**
 * get_length - get length of string
 * @str: pointer to string
 * @len: length of a string
 * Return: return length of string
 */

int get_length(char *str, int len)
{
  if (*(str + len) != '\0')
    {
      return (get_length(str, ++len));
    }
  return (--len);
}

/**
 * check_pali - gets length of string
 * @f: pointer to string
 * @r: length of a string
 * @len: length of a string
 * Return: return 0 if its not palindrome return 1 if it is
 */

int check_pali(char *f, char *r, int len)
{
  if (*f == *(r + len) && len > 1)
    {
      f++;
      return (check_pali(f, r, --len));
    }
  if (len == 1)
    return (1);
  return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
  return (check_pali(s, s, get_length(s, 0)));
}
