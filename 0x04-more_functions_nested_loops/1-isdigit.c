#include "main.h"

/**
 * _isdigit - function that checks for 0 through 9
 * @c: function parameter
 * Return: 1 if succesful, 0 if failed
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
