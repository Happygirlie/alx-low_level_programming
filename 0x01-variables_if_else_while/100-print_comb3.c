#include <stdio.h>

/**
 * main - This prints all possible combinations of two numbers
 *
 * Return: 0 (successful)
 */

int main(void)
{
	int n, m;

	for (n = 48 ; n <= 56 ; n++)
	{
		for (m = 49 ; m <= 57 ; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 56 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
