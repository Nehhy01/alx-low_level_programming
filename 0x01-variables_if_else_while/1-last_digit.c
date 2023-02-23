#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */

int m;
m = n % 10;
if (m > 0)
	printf("Last digit of %d is %d and is grsater than 5\n", n, m);
else if (m == 0)
	printf("Last digit of %d is %d and is equal to 0\n", n, m);
else
	printf("Last digit of %d is %d and is less than 5\n", n, m);
return (0);
}
