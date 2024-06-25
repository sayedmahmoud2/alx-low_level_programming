#include "main.h"
/**
*print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
*
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line < 10; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
