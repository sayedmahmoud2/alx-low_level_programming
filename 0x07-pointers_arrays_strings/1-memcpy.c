#include "main.h"

/**
 * _memcpy - copies memory area,
 * @dest: memory.
 * @src: source memory.
 * @n: bytes.
 * Return: the pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		*(dest + c) =  *(src + c);

	return (dest);
}
