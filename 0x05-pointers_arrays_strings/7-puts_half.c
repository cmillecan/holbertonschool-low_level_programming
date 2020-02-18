#include "holberton.h"

/**
* puts_half - prints half of a string
* @str: is the string
* Return: void
*/

void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}
	else
	{
		for (j = ((i - 1) / 2) + 1; j < i; j++)
		{
			_putchar(str[j]);
		}
		_putchar(str[j]);
	}
}
