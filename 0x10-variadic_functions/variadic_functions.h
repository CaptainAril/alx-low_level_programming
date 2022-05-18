#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

/**
 * struct print_funct - a struct type for print function
 * @symbol: a symbol representing a data type
 * @print: a function pointer to a function that prints a data type that corresponds to symbol
 */

typedef struct print_func
{
  char *symbol;
  void (*print)(va_list arg);
} printer;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *seperator, const unsigned int n, ...);
void print_strings(const char *seperator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
