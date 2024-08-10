#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	int _len, base_two;

	if (!b)
		return (0);

	ui = 0;

	for (_len = 0; b[_len] != '\0'; _len++)
		;

	for (_len--, base_two = 1; _len >= 0; _len--, base_two *= 2)
	{
		if (b[_len] != '0' && b[_len] != '1')
		{
			return (0);
		}

		if (b[_len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
