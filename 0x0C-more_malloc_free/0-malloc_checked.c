#include <stdlib.h>
/**
  * *malloc_checked -function that allocates memory
  * @b: size of memory to be allocated.
  *
  * Return: pointer to the allocated memory
  */
void *malloc_checked(unsigned int b)
{
  void *i = malloc(b);

  if (i == NULL)
    exit(98);

  return (i);
}
