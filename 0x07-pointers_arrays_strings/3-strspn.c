#include "main.h"

/**
 * _strspn - print the length of substring.
 * @s: initial segment.
 * @accept:  bytes.
 * Return: the number bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, bool;

	for (i = 0; *(s + a) != '\0'; a++)
	{
		bool = 1;
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (a);
}
