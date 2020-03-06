#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

/**
 * *_memset - fills memory with a constant byte
 * @s: points to memory area
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

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	_memset(ptr, 0, (nmemb * size));

	return (ptr);
}
