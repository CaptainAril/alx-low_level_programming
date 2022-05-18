#include "varaidic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @seperator: the string to be printed betweent numbers
 * @n: the number of integers passed to the function
 * @...: variadic arguments of the function
 *
 * Return: print numbers passed into the variadic function, with seperator in between
 *         if seperator == NULL, don't print
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
unsigned int i;
va_list pn;

va_start(pn, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(pn, int));
if (i != (n - 1) && seperator != NULL)
{
printf("%s", seperator);
}
}
va_end(pn);
printf("\n");
}
