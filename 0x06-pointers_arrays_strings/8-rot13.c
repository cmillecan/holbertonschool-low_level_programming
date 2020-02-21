#include "holberton.h"

/**
* rot13 - encodes a string using rot13
* @s: is the string
* Return: char
*/

char *rot13(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] + i >= 'a' && s[i] + i < 'n') ||
				(s[i] + i >= 'A' && s[i] + i < 'N'))
		{
			s[i] += 13;
		}
	}
	return (s);
}
