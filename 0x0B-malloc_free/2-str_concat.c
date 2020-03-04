#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: strings two
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i;
	int j;
	int k;

	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2 != NULL && s2[j] != '\0'; j++)
	{
	}

	s3 = malloc(sizeof(char) * (i + j + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[k] = s1[i];
		k++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s3[k] = s2[j];
		k++;
	}
	s3[k] = '\0';

	return (s3);
}
