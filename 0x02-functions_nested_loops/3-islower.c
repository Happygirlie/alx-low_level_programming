#include "main.h"

/**
 * _islower - Checks for a lower case character
 * @c: Parameter to be checked
 * Return: should return 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
