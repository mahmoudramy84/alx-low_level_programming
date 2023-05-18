#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: Number to print
 * Return: void
 */
void print_binary(unsigned long int n)
{
    int num_bits = sizeof(unsigned long int) * 8;
    unsigned long int mask = 1UL << (num_bits - 1);
    int leading_zeros = 1;
    while (mask)
    {
        if (n & mask)
        {
            _putchar('1');
            leading_zeros = 0;
        }
        else if (!leading_zeros)
        {
            _putchar('0');
        }
        mask >>= 1;
    }

    if (leading_zeros)
    {
        _putchar('0');
    }
}