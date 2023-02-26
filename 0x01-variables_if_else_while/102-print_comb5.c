#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers,
 * ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)

{
int c, d;

for (c = 0; c  <= 98;  c++)
{
	for (d = c + 1; d <= 99; d++)
	{
		putchar((c / 10) + '0');
		putchar((c % 10) + '0');
		putchar(' ');
		putchar((d / 10) + '0');
		putchar((d % 10) + '0');

		if (c == 98 && d == 99)
		continue;

		putchar(',');
		putchar(' ');
	}
}
	putchar('\n');
	return (0);
}
