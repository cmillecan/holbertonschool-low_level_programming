#include "holberton.h"
/**
* print_last_digit - prints the last digit of a number
* @n: is the number
* Return: Always 0
*/
int print_last_digit(int n)
{
	int i;

	i = n % 10;

	if (i < 0)
	{
		i = -1 * i;
		_putchar('0' + i);
		return (i);
	}
	else
	{
		_putchar('0' + i);
		return (i);
	}
}
