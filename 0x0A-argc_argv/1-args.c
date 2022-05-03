#include <stdio.h>

/**
 * main - prints the number of command line arguments passed into the program
 * @argc: number of command line arguments
 * @argv: array containing command line arguments
 * Return: return 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
