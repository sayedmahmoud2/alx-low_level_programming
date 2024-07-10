#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */

int _sqrt_recursion(int n)
{
	return (_power(n, 1));
}

/**
 *  _power - returns the natural square root of a number.
 * @n: input number.
 * @input: iterator.
 * Return: square root or -1.
 */

int _power(int n, int input)
{
	if (input * input == n)
		return (input);
	else if (input * input < n)
		return (_power(n, input + 1));
	else
		return (-1);
}
