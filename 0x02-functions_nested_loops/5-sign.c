#include "holberton.h"
/**
* print_sign - prints the sign of a number
* @n: number
* Return: 0
*/
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
