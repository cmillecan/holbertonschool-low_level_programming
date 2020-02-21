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
		if ((*(s + i) >= 'a' && *(s + i) < 'n') ||
			(*(s + i) >= 'A' && *(s + i) < 'N'))
		{
			*(s + i) += 13;
		}
		else if ((*(s + i) > 'm' && *(s + i) < 'z') ||
				(*(s + i) > 'M' && *(s + i) < 'Z'))
		{
			*(s + i) -= 13;
		}
	}
	return (s);
}
