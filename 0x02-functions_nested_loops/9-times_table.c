#include "holberton.h"
/**
* times_table - prints 9 times table
* Return: void
*/
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j / 10 == 0)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + (i * j / 10));
			}
			_putchar('0' + (i * j % 10));
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
