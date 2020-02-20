#include "holberton.h"

/**
* *_strncpy - copies strings
* @dest: first argument
* @src: second argument
* @n: number of bytes from src
* Return: returns a pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
