#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: char
 *
 * Return: pointer to an array.
 */
char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
	{
		return (0);
	}
	while (size--)
	{
		i[size] = c;
	}
	return (i);
}
