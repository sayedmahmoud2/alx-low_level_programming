#include "main.h"
/**
*_islower- print_ - Prints the alphabet in lowercase 10 times.
*@c: checks input function
* Return: Always 0 (Success)
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
