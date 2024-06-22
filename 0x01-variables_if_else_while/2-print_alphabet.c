#include <stdio.h>
/**
* main - Entry point
* discription: printing the alpgapet with putchar function and while loop
* Return: Always 0 (Success)
*/
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
