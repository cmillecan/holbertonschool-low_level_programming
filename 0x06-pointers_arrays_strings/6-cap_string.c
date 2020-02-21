#include "holberton.h"

/**
* cap_string - changes lowercase letters to uppercase
* @s: is the string
* Return: char
*/

char *cap_string(char *s)
{
	int i;
	int j;
	char a[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\0'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j])
			{
				i++;
				if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] -= 32;
				}
				i--;
			}
		}
	}

	return (s);
}
