#include "holberton.h"

/**
* rev_string - reverses a string
* @s: is the string
* Return: void
*/

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	char *start = s;
	char *end = s + i - 1;
	char temp;

	while (end > start)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
