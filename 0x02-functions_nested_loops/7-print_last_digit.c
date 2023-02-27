#include "main.h"

/**
 * print_last_digit - prints last digit
 * @d: integer to be commuted.
 * Return: value of last digit
 */

int print_last_digit(int d)
{
int a;

a = d % 10;

	if (d < 0)
		d = (d * -1);
	-putchar(a + '0');
	return (0);
}
