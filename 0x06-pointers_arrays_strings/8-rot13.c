#include "holberton.h"

/**
* rot13 - encodes a string using rot13
* @s: is the string
* Return: char
*/

char *rot13(char *s)
{
	int i;
	int j;
	char *a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *b = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (a[j] == s[i])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
