#include <stdio.h>

/**
 * main - This prints lower case alphabets in reverse
 *
 * Return: 0 (successful)
 */

int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');

	return (0);
}
