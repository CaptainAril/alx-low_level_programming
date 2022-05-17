#include <stdio.h>
#include <stdarg.h>

void print_numbers(const char *seperator, const unsigned int n, ...)
{
  unsigned int i;
  va_list pn;

  va_start(pn, n);
  for (i = 0; i < n; i++)
    {
      printf("%d", va_arg(pn, int));
      if (i != n - 1 && seperator != NULL)
	{
	  printf("%s", seperator);
	}
    }
      va_end(pn);
      printf("\n");
     
}
