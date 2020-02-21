#include "holberton.h"

/**
* leet - encodes a string into 1337
* @s: is the string
* Return: char
*/

char *leet(char *s)
{
	int i;
	int j;
	char replaceA[] = {'4', '4', '3', '3', '0',
		'0', '7', '7', '1', '1', '\0'};
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O',
		't', 'T', 'l', 'L', '\0'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (a[j] == s[i])
			{
				s[i] = replaceA[j];
			}
		}
	}

	return (s);
}
