#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	while (n > 0)
	{
		if (n == (n >> 1) << 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		n = n >> 1;
	}
}
