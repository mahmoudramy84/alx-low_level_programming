#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: Pointer to the value you want to set
 * @index:  the index, of the bit you want to set
 *
 * Returns: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
