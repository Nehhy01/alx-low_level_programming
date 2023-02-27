#include "main.h"

/**
 *  print_sign - prints + 0 or - if n is positive, zero or negative.
 *  @n: parameter to be checked.
 *  Return: 1 if n is positive 0 if its zero or -1 if its negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}

	if (n < 0)
	{
	_putchar('-');
	return (-1);
	}

	else
	_putchar(0);
	return (0);
}
