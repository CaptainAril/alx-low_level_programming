#include "main.h"

/**
 * print_chessboard - prints a chessboard
 *
 * @a: pointer to chessboard array to print
 */
void print_chessboard(char (*a)[8])
{
	int MAX_LENGTH = 8;
	int x, y;

	for (x = 0; x < MAX_LENGTH; x++)
	{
		for (y = 0; y < MAX_LENGTH; y++)
			_putchar(a[x][y]);
		_putchar('\n');
	}
}
