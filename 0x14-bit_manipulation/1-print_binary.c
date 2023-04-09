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

    while (mask)
    {
        if (n & mask)
        {
            _putchar('1');
        }
        else
        {
            _putchar('0');
        }
        mask >>= 1;
    }
}
