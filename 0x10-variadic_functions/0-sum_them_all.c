#include <stdarg.h>

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
      sum = va_arg(sm, int);
    }
  va_end(sm);
  return(sum);
}
