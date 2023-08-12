#include <stdio.h>

/**
 * main - This program writes the alphabeths in lower and upper case
 *
 * Return: 0 (successful)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
