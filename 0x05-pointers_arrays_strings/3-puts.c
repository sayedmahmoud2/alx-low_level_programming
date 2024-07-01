#include "main.h"

/**
 * _puts - prints a string.
 * @str: input char.
 * Return: no return.
 */
void _puts(char *str)
{
	i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar(\n);
			break;
		}
		_putchar(str[i]);
		i++;
	}
}
