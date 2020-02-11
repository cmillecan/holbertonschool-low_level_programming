#include "holberton.h"
/**
* print_alphabet_x10 - prints the alphabet 10 times.
*/
void print_alphabet_x10(void)
{
	int j;
	int n;

	for (j = 0; j < 10; j++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
	_putchar('\n');
	}
}
