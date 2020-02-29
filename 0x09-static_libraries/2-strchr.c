#include "holberton.h"

/**
* *_strchr - locates a character in a string
* @s: string
* @c: character
* Return: char
*/

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	{
	return (0);
	}
}
