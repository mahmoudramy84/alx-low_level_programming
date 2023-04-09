#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int i = 0;

    if (!b)
    {
        return 0;
    }

    while (b[i] != '\0')
    {
        if (b[i] != '0' && b[i] != '1')
			return (0);
        result <<= 1;
		if (b[i] == '1')
			result += 1;
        i++;
    }
    return result;
}
