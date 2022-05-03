#include <stdio.h>

/**
 * main - multiplies two numbers recieved as arguments
 * prints 'Error' if program does not recieve two arguments
 * @argc: numbers of command line arguments
 * @argv: array containing the command line arguments
 * Return: Return 1 for error or 0 for Success
 */

int main(int argc, char *argv[])
{
if (argc < 2)
{
printf("Error\n");
return (1);
}
int mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
return (0);
}
