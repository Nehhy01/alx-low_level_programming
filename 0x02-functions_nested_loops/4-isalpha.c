#include "main.h"

/**
 * _isalpha - checks if parameter is a letter or not.
 * @c: parameter to be checked.
 * Return: 1 if it is a letter, 0 if otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
