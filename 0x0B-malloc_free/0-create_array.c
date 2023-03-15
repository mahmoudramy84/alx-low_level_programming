#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -creates an array of chars, and initializes it with a specific char.
 * @size: the size of the Array to craete
 * @char: the charcter to inial it in array
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
    char *arr;
    int i;
    arr = malloc((size + 1) * sizeof(char));
    if (arr == NULL)
    {
        return (NULL);
    }
    for( i = 0; i < size ; i++ )
    {
        arr[i] = c; 
    }
    arr[i] = '\0';
    return (arr);
    free(arr);
}
