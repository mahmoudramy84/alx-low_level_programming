#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum
 * of all its parameters.
 * @n : number of parameters.
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
    /* creating va_list to store the variable argument list */
    va_list my_nums;
    int sum = 0;

    if (n == 0)
       return (0);
    /* init valist for the number of arguments */
    va_start(my_nums, n);

    /* loop through/access all arguments stored in the valist */
    for (int i=0; i<n; i++)
        sum += va_arg(my_nums, int);

    va_end(my_nums);
    return (sum);
}
