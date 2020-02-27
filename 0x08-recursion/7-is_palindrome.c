#include "holberton.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}

int p_loop(char *s, int l, int h)
{
	if (h > l)
	{
		return (1);
	}
	if (!*s)
	{
		return (1);
	}
	if (s[l] != s[h])
	{
		return (0);
	}
	else
	{
		return (0);
	}
}

int is_palindrome(char *s)
{
	int sl;

	sl = _strlen_recursion(s);

	return (p_loop(s, 0, sl - 1));
}
