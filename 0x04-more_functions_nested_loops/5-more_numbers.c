#include "holberton.h"
/**
* more_numbers - print 10 times the numbers
* @void: is the argument
* Return: 0
*/
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
