#include "holberton.h"

/**
 * _puts_recursion - prints a string.
 * @s: string
 * Return: Void
 */

void _puts_recursion(char *s)
{
	_putchar(*s++);

	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
