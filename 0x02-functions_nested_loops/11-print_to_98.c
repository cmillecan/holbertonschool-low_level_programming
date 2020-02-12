#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - print natural numbers
* @a: is first argument
* Return: void
*/
void print_to_98(int a)
{
	while (a < 98)
	{
		printf("%d, ", a);
		a++;
	}
	while (a > 98)
	{
		printf("%d, ", a);
		a--;
	}
	printf("%d\n", a);
}
