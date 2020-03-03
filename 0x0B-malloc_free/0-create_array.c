#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: unsigned int
 * @c: char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);

	if (size == 0)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	if (s == NULL)
	{
		return (NULL);
	}

	return (s);
}
