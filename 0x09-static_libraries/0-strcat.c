#include "holberton.h"

/**
* *_strcat - concatenates two strings
* @dest: first argument
* @src: second argument
* Return: returns a pointer to dest
*/

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (start);
}
