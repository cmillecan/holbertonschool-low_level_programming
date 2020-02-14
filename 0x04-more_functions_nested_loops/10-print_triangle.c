#include "holberton.h"
#include <stdio.h>

/**
* print_triangle - print a triangle
* @size: is the first argument
* Return: void
*/

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
		{
			_putchar(' ');
		}
		for (k = 0; k < i; k++)
		{
			 _putchar('#');
		}
		_putchar('\n');
	}
}
