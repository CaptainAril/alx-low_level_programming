#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: point to string
 * @to: sting to set to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
