#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

unsigned int binary_to_uint(const char *b)
{
	int i, len;
	unsigned int num, x, y;

	i = 0;
	num = 0;
	x = 0;
	y = 0;
	len = 0;

	if (b == NULL)
		return 0;
	len = strlen(b);

	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return 0;
		else
		{
			x = ((unsigned int)(b[i]) - '0');
			printf("%d\t", x);
/*			printf("len: %d\t", len);
			y = x * 2;
			printf("%d\t", y);
			num += y;
			printf("%d\n", num);*/
			i++;
		}
	}
	i = len+y;
	printf("\t---------\n");
	return num;
}
