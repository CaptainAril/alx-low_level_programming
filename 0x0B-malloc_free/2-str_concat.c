#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
char *t;
int i, j;

if (s1 == NULL)
{
s1 = " ";
}
if (s2 == NULL)
{
s2 = " ";
}

for (i = 0; s1[i] != '\0'; i++)
}
,
}
for (j = 0; s2[j] != '\0'; j++)
{
,
}

t = malloc(sizeof(char) * (i + j + 1));

if (t == NULL)
{
return (NULL);
}

for (i = 0; s1[i] != '\0'; i++)
{
t[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++, i++)
{
t[i] = s2[j];
}
t[i] = '\0';

return (t);
}
