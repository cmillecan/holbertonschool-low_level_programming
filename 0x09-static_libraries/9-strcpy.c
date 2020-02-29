#include "holberton.h"

/**
* _strcpy - copies string src to dest
* @dest: first argument
* @src: second argument
* Return: char
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
