#include "holberton.h"

/**
* *_strpbrk - searches a string for any of a set of bytes
* @s: string
* @accept: string
* Return: char
*/

char *_strpbrk(char *s, char *accept)
{
	char str;
	char *a;

	for (str = *s; str != 0; s++, str = *s)
	{
		for (a = accept; *a != 0; a++)
		{
			if (str == *a)
			{
				return (s);
			}
		}
	}
	return (0);
}
