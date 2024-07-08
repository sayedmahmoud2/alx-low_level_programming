#include "main.h"

/**
 * _memset - fills memory with a constant byte,
 * @s: memory .
 * @b: byte.
 * @n: bytes added.
 * Return: the pointer to s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; i++)
	{
		*(s + c) = b;
	}
	return (s);
}
