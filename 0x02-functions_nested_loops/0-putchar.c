#include "main.h"
/**
* main - Prints _putchar as a message.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;

for (n = 0; n < 8; n++)
{
	_putchar("_putchar"[n]);
}
_putchar('\n');
return (0);
}
