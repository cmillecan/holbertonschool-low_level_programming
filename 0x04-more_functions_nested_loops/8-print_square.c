#include "holberton.h"
#include <stdio.h>

/**
* print_square - prints a square
* @size: is the first argument
* Return: int
*/

void print_square(int size)
{
	int a;
	int b;

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
