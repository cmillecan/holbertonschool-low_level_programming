#include "holberton.h"

/**
* _puts - prints a string, followed by a new line
* @str: is the string
* Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
*          int i;
*
*       i = 0;
*
*       while (str[i] != '\0')
*       {
*               _putchar(str[i]);
*               i++;
*       }
*/
