#include "main.h"
/**
 * main - checks for a digit (0 through 9).
 *
 * Return: returns 1 if it is uppercase , 0 if not
 */
 
 int _isdigit(int c)
 {
	 if ((c >= 48) && (c <= 57))
		 return(1);

	         return (0);
 }

