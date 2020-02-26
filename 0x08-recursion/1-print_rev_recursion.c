#include "holberton.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	_putchar(*s++);

	if (*s != '\0')
	{
		_print_rev_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
