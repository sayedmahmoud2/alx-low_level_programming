#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string.
 * @needle: substring.
 * Return: pointer to the beginning of located substrig
*/
char *_strstr(char *haystack, char *needle)
{
	char *_haystack;
	char *_needle;

	while (*haystack != '\0')
	{
		_haystack = haystack;
		_needle = needle;

		while (*haystack != '\0' && *_needle != '\0' && *haystack == *_needle)
		{
			haystack++;
			_needle++;
		}
		if (!*_needle)
			return (_haystack);
		haystack = _haystack + 1;
	}
	return (0);
}
