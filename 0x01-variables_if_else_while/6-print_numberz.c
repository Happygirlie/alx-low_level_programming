#include <stdio.h>

/**
 * main - This prints all single digits in base 10
 *
 * Return: 0 (successful)
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');

	return (0);
}
