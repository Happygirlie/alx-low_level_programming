#include <stdio.h>

/**
 * main - This prints numbers of base 16
 *
 * Return: 0 (successful)
 */

int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');

	return (0);
}
