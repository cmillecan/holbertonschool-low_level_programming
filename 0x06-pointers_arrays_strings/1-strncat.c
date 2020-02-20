#include "holberton.h"

/**
* *_strncat - concatenates two strings
* @dest: first argument
* @src: second argument
* @n: number of bytes from src
* Return: returns a pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int i = 0;

	while (*dest)
	{
		dest++;
	}
	dest--;

	if (*dest != 'i')
	{
		dest++;
	}

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	*dest = '\0';

	return (temp);
}
