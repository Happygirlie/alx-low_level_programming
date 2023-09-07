#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a srrung is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 if it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(S, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion -returns thw length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the charcters recursively for palindrome
 * @s: string to be checked
 * @i: iterator
 * @len: lengtg of the string
 * Return: 1 if palindrom, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + 1) != *(s + len))
		return (0);
	if (i >= len)
		return (1);
	return (check _pal(s, i + 1, len - 1));
}
