#include <stdio.h>
/**
* main - Prints numbers between 0 to 9.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	i = 97;

	while (i <= 102)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
