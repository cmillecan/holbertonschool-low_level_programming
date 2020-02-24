#include "holberton.h"

/**
* *_memset - fills memory with a constant byte
* @s: string
* @b: constant byte
* @n: int
* Return: char
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	while (n-- > 0)
		*temp++ = b;

	return (s);
}
