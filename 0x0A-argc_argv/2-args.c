#include <stdio.h>

/**
 * main - prints all arguments received by the program, each on a new line
 * @argc: number of command line arguments
 * @argv: array comtaining the command line arguments
 * Return: return (0)
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
