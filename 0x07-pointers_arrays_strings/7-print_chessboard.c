#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer.
 * Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int j, b = 0;

	for (j = 0; j < 64; j++)
	{
		if (j % 8 == 0 && j != 0)
		{
			b = i;
			_putchar('\n');
		}
		_putchar(a[j / 8][j - b]);
	}
	_putchar('\n');
}
