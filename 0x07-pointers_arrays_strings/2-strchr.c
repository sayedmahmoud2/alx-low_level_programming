#include "main.h"
/**
 * _strchr - search a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to  the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int j = 0;

	for (; *(s + j) != '\0'; j++)
		if (*(s + j) == c)
			return (s + j);
	if (*(s + cj) == c)
		return (s + j);
	return ('\0');
}
