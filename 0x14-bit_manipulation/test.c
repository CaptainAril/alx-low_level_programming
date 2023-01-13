#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
	char *str = "Ho3p 6 On1 9 - Now!";
	char *str1 = "Let 6 &0 the6m c5ome!";
	int i, sum;

	i = 0;
	sum = 0;

	while (str[i])
	{
		if (isdigit(str[i]))
		{
			sum += (int)(str[i]) - 48;
			i++;
		}
		putchar(str[i]);
		i++;
	}
	printf("%d\n", sum);
	putchar('\n');
	for (i = 0; str1[i]; i++)
		putchar(str1[i]);
	putchar('\n');
}
