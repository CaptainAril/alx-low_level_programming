#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of variadic parameters passed to the function
 * @...: variable arguments
 *
 * Return: 0 - if n == 0
 *             else, the sum of all the variable arguments
 */

int sum_them_all(const unsigned int n, ...)
{
int sum;
unsigned int i;
va_list sm;
sum = 0;

if (n == 0)
{
return (0);
}

va_start(sm, n);
for (i = 0; i < n; i++)
{
sum += va_arg(sm, int);
}
va_end(sm);
return (sum);
}
