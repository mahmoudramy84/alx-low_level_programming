#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n:  number to check bits in it
 * @index:the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index
 *  or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned long int mask, check;

    if (index >= (sizeof(unsigned long int) * 8-1))
    {
        return -1;
    }
    mask = 1 << index;
	check = n & mask;
	if (check == mask)
		return (1);
	return (0);

}