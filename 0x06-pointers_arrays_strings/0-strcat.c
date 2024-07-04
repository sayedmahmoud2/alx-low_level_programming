#include "main.h"
/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int a, a2;

	a = 0;

	while (dest[a])
	{
		dest++;
	}
	for (a2 = 0; src[a2]; a2++)
	{
		dest[a] = src[a2];
		a++;
	}
	return (dest);
}
