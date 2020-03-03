#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)
{
	int len;
	char *cpy;
	int i;

	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + len))
	{
		len++;
	}

	cpy = malloc(sizeof(char) * (len + 1));

	if (cpy == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		cpy[i] = str[i];
	}
	cpy[i] = '\0';

	return (cpy);
}
