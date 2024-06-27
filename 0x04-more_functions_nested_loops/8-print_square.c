#include "main.h"

/**
* print_square - print ractengal
* @size: input parmetar
* Return: no return.
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar(35);
			}

		}
	}
	putchar('\n');
}
