#include "main.h"
/**
*_isalpha- print_ - Prints the alphabet in lowercase 10 times.
*@c: checks input function
* Return: Always 0 (Success)
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
