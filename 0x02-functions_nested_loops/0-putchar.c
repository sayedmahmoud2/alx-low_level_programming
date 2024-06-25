#include "main.h"
/**
* main - Prints _putchar as a message.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar("_putchar"[i]);
	}
	putchar('\n');
	return (0);
}
