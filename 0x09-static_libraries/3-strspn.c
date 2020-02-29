#include "holberton.h"

/**
* _strspn - gets the length of a prefix substring
* @s: first argument
* @accept: second argument
* Return: char
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (accept[j] != s[i])
			break;
	}
	return (i);
}
