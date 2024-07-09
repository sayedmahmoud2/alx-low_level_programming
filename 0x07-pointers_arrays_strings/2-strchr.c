#include "main.h"
/**
 * _strchr - search a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to  the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int c = 0;

	for (; *(s + c) != '\0'; c++)
		if (*(s + c) == c)
			return (s + c);
	if (*(s + c) == c)
		return (s + c);
	return ('\0');
}
