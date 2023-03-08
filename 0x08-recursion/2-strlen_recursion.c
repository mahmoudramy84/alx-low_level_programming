#include "main.h"

/**
 * _strlen_recursion - return length of a string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
    if (*str == '\0') {
        return 0;
    } else {
        return 1 + string_length(str + 1);
    }
}
