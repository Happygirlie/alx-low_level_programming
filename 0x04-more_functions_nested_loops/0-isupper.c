#include "main.h"

/**
 * _isupper - checks for uppercae characters
 * @c: function parameter
 * Return: 1 if successful, 0 if failed
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
