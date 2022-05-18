#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @seperator: the string printed between the variadic argument strings
 * @n: the number of strings passed to the function
 * @...: Variable arguments/strings to be printed
 *
 * Return: Prints strings
 *         if seperator == NULL, don't print seperator
 *         if string == NULL, print (nil) instead
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
unsigned int i;
char *str;
va_list ps;

va_start(ps, n);
for (i = 0; i < n; i++)
{
str = va_arg(ps, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if ( i != (n - 1) && seperator)
{
printf("%s", seperator);
}
}
printf("\n");

va_end(ps);
}
