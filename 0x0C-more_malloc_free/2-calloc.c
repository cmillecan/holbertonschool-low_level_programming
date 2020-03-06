#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	ptr = 0;

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	return (ptr);
}
