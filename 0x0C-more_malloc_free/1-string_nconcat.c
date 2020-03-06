#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

unsigned int _strlen(char *s);

/**
* _strlen - returns the length of a string
* @s: is a string
* Return: length of string
*/

unsigned int _strlen(char *s)
{
	unsigned int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: unsigned int
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *s3;
	unsigned int i, j;
	unsigned int count, len1, len2;

	count = 0;
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= len2)
	{
		n = len2;
	}

	s3 = malloc(sizeof(char) * (len1 + n + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}
	if (s1)
	{
		for (i = 0; i < len1; i++, count++)
		{
			s3[count] = s1[i];
		}
	}
	if (s2)
	{
		for (j = 0; j < n; j++, count++)
		{
			s3[count] = s2[j];
		}
	}

	s3[count] = '\0';

	return (s3);
}
