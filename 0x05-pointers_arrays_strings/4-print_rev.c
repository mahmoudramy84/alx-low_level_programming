#include "main.h"

/**
 * print_rev - a function that prints a string.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
