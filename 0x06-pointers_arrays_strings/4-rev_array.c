#include "main.h"
/**
 * reverse_array - Reverse the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
  int i, j, tmp;
  
  j = n - 1;
    
  for (i = 0; i < n / 2; i++)

    {
      tmp = a[i];
      a[i] = a[j];
      a[j--] = tmp;
    }
}
