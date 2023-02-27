#include "main.h"

/**
 * islower - checks if a char is lower or not
 * 
 * Return: 1 if c is lower and 0 if otherwise
 */

int _islower(int c)
{
	if  (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
