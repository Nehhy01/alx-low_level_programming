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
	for (c = 'a'; c <= 'z'; c++)
		_putchar('a');
	_putchar('\n');
	}
}
