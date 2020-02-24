#include "holberton.h"

/**
* *_strstr - locates a substring
* @haystack: string
* @needle: substring
* Return: char
*/

char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *p1;
	char *p2;

	for (start = &haystack[0]; *start != '\0'; start++)
	{
		p1 = needle;
		p2 = start;

		while (*p1 != '\0')
		{
			if (*p1 != *p2)
				break;
			p1++;
			p2++;
		}
		if (*p1 == '\0')
		{
			return (start);
		}
	}
	return (0);
}
