#include <stdio.h>

/**
 * main - A program that prints alphabets in lower case
 *
 * Return: 0 (successful)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar (i);
	putchar('\n');
	return (0);
}
