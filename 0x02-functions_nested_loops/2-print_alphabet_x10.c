#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet ten times
 * Return: 0 (Success)
 *
 */

void print_alphabet_x10(void)
{
int a;
char c;

a = 0;
c = 'a';

while (a++ <= 9)
	{
	if (c <= 'z')
		_putchar(a);
		c++;
	_putchar('\n');
	}
}
