#include "holberton.h"
/**
* print_numbers - prints number from 0 to 9
* @void: is the argument
* Return: 0
*/
void print_numbers(void)
{
	int i;
	
	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
