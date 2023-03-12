#include"main.h"
/**
* Description :fills the first n bytes of the memory area pointed to by string with a constant byte b.
* @s : string
* @b : the replaced char 
* @n : length filled in the memory 
* return: char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while ( 1 < n)
	{
		*( s + i ) = b;
		i++;
	}
	
	return (s);
} 
