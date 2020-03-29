#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int rev = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		if (1 == (n & 1))
		{
			rev = (rev << 1) + 1;
		}
		else
		{
			rev = (rev << 1);
		}
		n = n >> 1;
	}

	while (rev > 0)
	{
		if (1 == (rev & 1))
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		rev = rev >> 1;
	}
}
