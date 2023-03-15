#include "main.h"
#include <stdlib.h>

/**
 * *create_array -creates an array of chars,
 * @size: the size of the Array to craete
 * @c: the charcter to inial it in array
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
    char *arr;
    unsigned int i;

    if (size == 0)
		return (NULL);

    arr = malloc((size) * sizeof(char));
    
    if (arr == NULL)
        return (0);

    for( i = 0; i < size ; i++ )
        arr[i] = c; 

    arr[i] = '\0';

    return (arr);
}