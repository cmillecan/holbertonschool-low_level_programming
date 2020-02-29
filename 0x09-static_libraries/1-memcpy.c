#include "holberton.h"

/**
* *_memcpy - copies memory area
* @dest: memory area
* @src: memory area
* @n: bytes
* Return: char
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	char *s = src;

	while (n--)
		*d++ = *s++;

	return (dest);
}
