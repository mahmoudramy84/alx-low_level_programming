#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */
char *str_concat(char *s1, char *s2)
{
    char *sum;
    int a, b, c, d;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    for (a = 0; s1[a] != '\0'; a++)
        ;
    for (b = 0; s2[b] != '\0'; b++)
        ;

    sum  = malloc((a * sizeof(*s1)) + (b * sizeof(*s2)) + 1);
	if (sum == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (a + b + 1); c++)
	{
		if (c < d)
			sum[c] = s1[c];
		else
			sum[c] = s2[d++];
	}

	return (sum);
}
